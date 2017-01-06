#pragma once
#include"value.h"
#include<vector>
#include<memory>
class A
{
public:
	int get() const { return _value; }
	void set(int v) {
		_value = v;
		for (vptr::iterator b = _vs.begin(); b != _vs.end(); ++b)
		{
			(*b)->print(get());
		}
	}
	void bind(Value &v)
	{
		_vs.push_back(&v);
	}
private:
	typedef std::vector<Value*> vptr;
	vptr _vs;
	int _value;
};