#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Text {
	string t;
public:
	Text();
	Text(string a);
	string contents();
};

Text::Text() {}
Text::Text(string a) {
	ifstream in(a.c_str());
	string line;
	//t = " ";
	while(getline(in,line))
		t += (line + "\n");
}
string Text::contents() {
	return t;
}
int main()
{
	Text t("7_1.cpp");
	cout << t.contents() << endl;
}
