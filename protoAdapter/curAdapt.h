#pragma once

class BaseABC
{
public: 
};

class WrapperABC : public BaseABC, private ItemA, private ItemB
{

};

class ItemA
{

};

class ItemB
{

};