#include <iostream>
using namespace std;

struct structTest {
	void fun();
};
int main()
{
	structTest st1;
	st1.fun();
}

void structTest:: fun() {
	cout << "structTest fun() " << endl;
}
