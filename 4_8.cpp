#include <iostream>
using namespace std;

struct Stack {
	struct Link {
		void * data;
		Link * next;
		void initialize(void * dat,Link * nxt);
	}* head;
	void initialize();
	void push(void * dat);
	void * peek();
	void * pop();
	void cleanup();
};

int main()
{
	Stack doubleStack;
	doubleStack.initialize();
	for(double i = 0.0;i < 25.0;i++)
		doubleStack.push(&i);
	double *temp;
	while((temp = (double *)doubleStack.pop()) != 0) {
		cout << *temp << endl;
		delete temp;  //have some problems
	}
	
}
void Stack::Link::initialize(void * dat,Link * nxt)
{
	data = dat;
	next = nxt;
}
void Stack::initialize() {head = 0;}
void Stack::push(void *dat)
{
	Link * newLink = new Link;
	newLink->initialize(dat,head);
	head = newLink;
}
void * Stack::peek()
{
	if(head == 0) {
		cout << "Stack empty!" << endl;
		return 0;
	}
	return head->data;
}
void * Stack::pop()
{
	if(head == 0)
		return 0;
	void * result = head->data;
	Link * oldHead = head;
	head = head->next;
	delete oldHead;
	return result;
}
void Stack::cleanup()
{
	
}
