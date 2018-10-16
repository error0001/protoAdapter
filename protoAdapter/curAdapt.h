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
	virtual void Init() = 0;
	virtual void GetDataA() = 0;
	virtual void GetDataB() = 0; 
};

class WrapperABC : public BaseABC, private ItemA, private ItemB
{
public:
	WrapperABC(BaseABC someABC)
	{

	}
	void Init(){}
};

class ItemA : public BaseABC
{
public:
	ItemA()
	{
		cout << "Create item A" << endl;
	}
	void Init(){}
	void GetDataA(){}
};

class ItemB : public BaseABC
{
public:
	ItemB()
	{
		cout << "Create item A" << endl;
	}
	void Init(){}
	void GetDataB(){}
};