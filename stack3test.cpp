#include "stack3.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc,char * argv[])
{
	ifstream in(argv[1]);
	Stack textlines;
	string line;
	while(getline(in,line))
		textlines.push(new string(line));
	string* s;
	while((s = (string *)textlines.pop()) != 0) {
		cout << *s << endl;
		delete s;
	}
}
