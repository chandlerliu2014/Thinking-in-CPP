#include <string>
#include <iostream>
using namespace std;

class Message {
	string s;
public:
	Message(string a = "default");
	void print();
	void print(string a);
};

Message::Message(string a) {
	s = a;
}
void Message::print() {
	cout << s << endl;
}
void Message::print(string a) {
	cout << s+a << endl;
}

int main()
{
	Message m("test");
	m.print();
	m.print(",hello");
	Message m1;
	m1.print();
	m1.print(",hello");
}
