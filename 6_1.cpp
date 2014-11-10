#include <iostream>
using namespace std;

class Simple {
public:
	Simple();
};

Simple::Simple() {
	cout << "constructor" << endl;
}
int main()
{
	Simple s;
}
