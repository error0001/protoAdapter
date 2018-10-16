#pragma once
#include "Figure.h"
#include "LegacyFigure.h"

// adpter wrapper
class FigureAdapter : public Figure, private LegacyFigure
{
public:
	FigureAdapter(Coordinate x, Coordinate y, Dimension w, Dimension h) :
	LegacyFigure(x, y, x + w, y + h)
	{
		std::cout << "FigureAdapter: create.  (" << x << "," << y <<
			"), width = " << w << ", height = " << h << std::endl;
	}
	virtual void draw()
	{
		std::cout << "FigureAdapter: draw." << std::endl;
		oldDraw();
	}
};
