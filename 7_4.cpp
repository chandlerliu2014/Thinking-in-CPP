#include <iostream>
using namespace std;

class Test {
public:
	//void f();
	//void f(int a);
	//void f(int a,int b);
	void f(int a = 1,int b = 2,int c = 3);
};
/*
void Test::f() {
	cout << "f()" << endl;
}
void Test::f(int a) {
	cout << "f(int a) " << a << endl;
}
void Test::f(int a,int b) {
	cout << "f(int a,int b) " << a << b <<  endl;
}*/
void Test::f(int a,int b,int c) {
	cout << "f(int a,int b,int c) " << a << b << c << endl;
}

int main()
{
	Test t;
	t.f();
	t.f(1);
	t.f(1,2);
	t.f(1,2,3);
}
