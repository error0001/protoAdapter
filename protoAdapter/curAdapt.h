#pragma once
#ifndef CURADAPT_H
#include <iostream>
using namespace std;
#endif

class BaseABC
{
public: 
	virtual void Init() = 0;
	virtual void GetData() = 0;
};

class ItemA : public BaseABC
{
public:
	ItemA() 
	{
		cout << "Create item A" << endl;
	}
	void Init()
	{
		//	BaseABC::Init();
	}
	void GetData()
	{
	}
};

class ZZZ
{
public:
	ZZZ()
	{
	}
	void Init()
	{
		cout << "CreateZZZ" << endl;
	}
};

class ItemZ : public BaseABC, private ZZZ
{
	ZZZ z;
public:
	ItemZ()
	{
		cout << "Create item Z" << endl;
		z.Init();
	}
	void Init()
	{
		cout << "Initialize Z" << endl;
	}
	void GetData()
	{
	}
};

class AdapterAZ : public BaseABC, private ItemZ
{
public:
	AdapterAZ() : BaseABC()
	{}
	AdapterAZ(BaseABC *inBase) : BaseABC()
	{
		cout << "RunAdapter" << endl;
	}
	void Init()
	{
		
	}
	void GetData()
	{

	}
};



/*
class WrapperB : public BaseABC, private ItemB
{
public:
	WrapperB(ItemB inB)
	{

	}
	void Init()
	{
		cout << "Create wrapper B" << endl;
	}
	void GetData()
	{

	}
};
*/
