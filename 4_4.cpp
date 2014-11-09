#include <iostream>
using namespace std;

struct structTest {
	int a;
};

void fun1(structTest *st,int b); 
void fun2(structTest *st);
 
int main()
{
	structTest st;
	fun1(&st,1);
	fun2(&st);
}
void fun1(structTest *st,int b) {
	st->a = b;
}
void fun2(structTest *st) {
	cout << st->a << endl;
}
