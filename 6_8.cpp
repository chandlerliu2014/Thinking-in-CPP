#include "stack3.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[5] = {
			"the first",
			"second",
			"third",
			"fourth",
			"fifth",
			};
	Stack stringStack;
	for(int i = 0;i < 5;i++)
		stringStack.push(new string(s[i]));
	string *line;
	while((line = (string *)stringStack.pop()) != 0) {
		cout << *line << endl;
		delete line;
	}
}
