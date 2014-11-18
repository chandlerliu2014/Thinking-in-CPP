#include <iostream>
using namespace std;

int y;
int& r = y;
const int& q = 12;
int x = 0;
int& a = x;
int main() {
	cout << "x = " << x << ", a = " << a << endl;
	a++;
	cout << "x = " << x << ", a = " << a << endl;
}
