#include <iostream>
using namespace std;

const int increment = 100;

struct Stash {
	int size;           //Size of each space
	int quantity;       //Number of storage spaces
	int next;           //Next empty space
	//Dynamically allocated array of bytes:
	unsigned char * storage;
	//Function
	void initialize(int size);
	void cleanup();
	int add(const void * element);
	void * fetch(int index);
	int count();
	void inflate(int increase);
};

int main()
{
	Stash doubleStash;
	doubleStash.initialize(sizeof(double));
	for(double i = 0.0;i < 25.0;i++)
		doubleStash.add(&i);
	for(int j = 0;j < doubleStash.count();j++)
		cout << "doubleStash.fetch(" << j << ") = "
			<< *(double*)doubleStash.fetch(j)
			<< endl;
	doubleStash.cleanup();
}

void Stash::initialize(int size)
{
	this->size = size;
	quantity = 0;
	storage = 0;
	next = 0;
}

void Stash::cleanup()
{
	if (storage != 0) {
		cout << "freeing storage" << endl;
		delete []storage;
	}
}
int Stash::add(const void * element)
{
	if(next >= quantity)
		inflate(increment);
	int startBytes = next * size;
	unsigned char * e = (unsigned char *)element;
	for(int i = 0;i < size;i++)
		storage[startBytes + i] = e[i];
	next++;
	return (next - 1);
}
void * Stash::fetch(int index)
{
	if(index < next && index >= 0) {
		return &(storage[index * size]);
	}
	return 0;
}
int Stash::count()
{
	return next;
}
void Stash::inflate(int increase)
{
	if(increase <= 0)
		return;
	int newQuantity = quantity + increase;
	int newBytes = newQuantity * size;
	int oldBytes = quantity * size;
	unsigned char * b = new unsigned char[newBytes];
	for(int i = 0;i < oldBytes;i++)
		b[i] = storage[i];
	delete []storage;
	storage = b;
	quantity = newQuantity;
}
