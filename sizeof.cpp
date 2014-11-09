#include <iostream>
using namespace std;

struct A {
	int i[100];
};

struct B {
	void f();
};

void B::f() {}

int main()
{
	cout << "sizeof struct A = " << sizeof(A)
		<< " bytes" << endl;
	cout << "sizeof struct B = " << sizeof(B)
		<< " bytes" << endl;
}
