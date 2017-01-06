#include"a.h"

int main(int argc, char **argv)
{
	A a;
	B b;
	C c;
	D d;
	a.set(3);
	a.bind(b);
	a.set(3);
	a.bind(c);
	a.set(3);
	a.bind(d);
	a.set(3);
	return 0;
}