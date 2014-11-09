#include <iostream>
using namespace std;

struct structTest {
	int a;

	void fun1(int b); 
	void fun2();
};
 
int main()
{
	structTest st;
	st.fun1(1);
	st.fun2();
}

void structTest::fun1(int b) {
	a = b;
}
void structTest::fun2() {
	cout << a << endl;
}
