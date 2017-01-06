#pragma once
#include<iostream>
class Singleton
{
public:
	static Singleton &instance()
	{
		static Singleton single;//ֻ�������ڲ�������
		return single;
	}
	void display()const
	{
		std::cout << "singleton strategy"<<std::endl;
	}
	//Singleton();
	//~Singleton();

private:
	Singleton()=default;//��ֹ�����������
};

//Singleton::Singleton()
//{
//}
//
//Singleton::~Singleton()
//{
//}