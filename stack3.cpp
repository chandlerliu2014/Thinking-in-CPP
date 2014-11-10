#include "stack3.h"
using namespace std;

Stack::Link::Link(void * dat,Link * nxt) {
	data = dat;
	next = nxt;
}
Stack::Link::~Link() {
	
}

Stack::Stack() { head = 0;}

void Stack::push(void * dat) {
	head = new Link(dat,head);
}
void * Stack::peek() {
	if(head != 0)
		return head->data;
	else
		return 0;
}
void * Stack::pop() {
	if(head == 0) return 0;
	void * result = head->data;
	Link * oldHead = head;
	head = head->next;
	delete oldHead;
	return result;
}
Stack::~Stack() {

}
