#include <iostream>
using namespace std;

int main()
{
	double d1[10] = {1.0,2.0,3.0};
	for(int i = 0;i < sizeof d1 /sizeof(double);i++)
		cout << d1[i] << endl;
	cout << "********************" << endl;
	double d2[] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
	for(int i = 0;i < sizeof d2 / sizeof d2[0];i++)
		cout << d2[i] << endl;
}
