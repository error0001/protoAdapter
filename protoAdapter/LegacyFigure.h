#pragma once
#include "Figure.h"

// Legacy component
class LegacyFigure
{
public:
	LegacyFigure(Coordinate x1, Coordinate y1, Coordinate x2, Coordinate y2)
	{
		x1_ = x1;
		y1_ = y1;
		x2_ = x2;
		y2_ = y2;
		std::cout << "LegacyFigure:  create.  (" << x1_ << "," << y1_ << ") => ("
			<< x2_ << "," << y2_ << ")" << std::endl;
	}
	void oldDraw()
	{
		std::cout << "LegacyFigure:  oldDraw.  (" << x1_ << "," << y1_ <<
			") => (" << x2_ << "," << y2_ << ")" << std::endl;
	}
private:
	Coordinate x1_;
	Coordinate y1_;
	Coordinate x2_;
	Coordinate y2_;
};