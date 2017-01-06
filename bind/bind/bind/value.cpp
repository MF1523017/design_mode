#include"value.h"
#include<iostream>

void B::print(int v)
{
	std::cout << v << std::endl;
}
void C::print(int v)
{
	std::cout << v*v << std::endl;
}
void D::print(int v)
{
	std::cout << v*2 << std::endl;
}