#include "6_6.h"
using namespace std;

struct Handle::Cheshire {
	int i;
};

Handle::Handle() {
	smile = new Cheshire;
	smile->i = 0;
}
Handle::~Handle() {
	delete smile;
}
int Handle::read() {
	return smile->i;
}
void Handle::change(int x) {
	smile->i = x;
}
