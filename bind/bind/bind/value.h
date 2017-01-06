#pragma once

class Value
{
public:
	virtual void print(int v) { ; };
	virtual ~Value() { ; };
};
class B :public Value
{
public:
	virtual void print(int v);
};
class C :public Value
{
public:
	virtual void print(int v);
};
class D :public Value
{
public:
	virtual void print(int v);
};