#include <iostream>
using namespace std;

class Simple {
public:
	Simple();
	~Simple();
};
Simple::Simple() {
	cout << "constructor" << endl;
}
Simple::~Simple() {
	cout << "deconstructor" << endl;
}

int main()
{
	Simple s;
}
