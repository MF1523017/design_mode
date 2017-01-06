#pragma once
#include<iostream>
class Singleton
{
public:
	static Singleton &instance()
	{
		static Singleton single;//只能在类内产生对象，
		return single;
	}
	void display()const
	{
		std::cout << "singleton strategy"<<std::endl;
	}
	//Singleton();
	//~Singleton();

private:
	Singleton()=default;//防止类外产生对象
};

//Singleton::Singleton()
//{
//}
//
//Singleton::~Singleton()
//{
//}