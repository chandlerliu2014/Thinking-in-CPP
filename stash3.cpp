#include "stash3.h"
#include <iostream>
#include <cassert>
using namespace std;
const int increment = 100;

Stash::Stash(int sz) {
	size = sz;
	quantity = 0;
	next = 0;
	storage = 0;
}
Stash::Stash(int sz,int initQuantity) {
	size = sz;
	quantity = 0;
	next = 0;
	storage = 0;
	inflate(initQuantity);
}
Stash::~Stash() {
	if(storage != 0) {
		cout << "freeing storage" << endl;
		delete []storage;
	}
}
int Stash::add(void * element) {
	if(next >= quantity)
		inflate(increment);
	int startBytes = next * size;
	unsigned char * e = (unsigned char *)element;
	for(int i = 0;i < size;i++)
		storage[startBytes + i] = e[i];
	next++;
	return (next - 1);
}
void * Stash::fetch(int index) {
	if(index >= 0 && index < next)
		return &(storage[index * size]);
	else 
		return 0;
}
int Stash::count() {
	return next;
}
void Stash::inflate(int increase) {
	if(increase <= 0)
		return;
	int newQuantity = quantity + increase;
	int newBytes = newQuantity * size;
	int oleBytes = quantity * size;
	unsigned char * b = new unsigned char[newBytes];
	for(int i = 0;i < oleBytes;i++)
		b[i] = storage[i];
	delete [](storage);
	storage = b;
	quantity = newQuantity;
}
