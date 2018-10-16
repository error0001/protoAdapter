#pragma once
#ifndef CURADAPT_H
#include <iostream>
using namespace std;
#endif

class BaseABC
{
public: 
	BaseABC()
	{
	}
	virtual void Init() = 0
	{
	}
	virtual void GetData() = 0
	{
	}
};

class ItemA : public BaseABC
{
public:
	ItemA() : BaseABC()
	{

	}
	ItemA() : BaseABC()
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

class ItemB : public BaseABC, private ItemZ
{
private:
	ItemZ z;
public:
	ItemB() : BaseABC()
	{
	}
	void Init()
	{
		z.Initialize();
	}
	void GetData(){}
};

class ItemZ
{
public:
	ItemZ()
	{
		cout << "Create item Z" << endl;
	}
	void Initialize()
	{
		cout << "Initialize Z" << endl;
	}
	void GetBuffer()
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
