#include <iostream>
using namespace std;

class Simple {
	int a;
public:
	Simple(int ab);
	~Simple();
};
Simple::Simple(int ab) {
	a = ab;
	cout << "constructor" << endl;
	cout << "a = " << a << endl;
}
Simple::~Simple() {
	cout << "deconstructor" << endl;
	cout << "a = " << a << endl;
}

int main()
{
	Simple s(1);
}
