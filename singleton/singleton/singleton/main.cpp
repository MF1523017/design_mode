#include"singleton.h"
#include<iostream>
using std::cout;
using std::endl;

int main(int argc, char **argv)
{
	Singleton::instance().display();
	return 0;
}