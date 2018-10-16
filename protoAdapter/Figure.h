#pragma once
#ifndef FIGURE_H
#include <iostream>
typedef int Coordinate;
typedef int Dimension;
#endif // !FIGURE_H


// PInterface - prototype interface
class Figure
{
public:
	virtual void draw() = 0;
};

