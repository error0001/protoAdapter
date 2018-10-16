#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Figure.h"
#include "LegacyFigure.h"
#include "FigureAdapter.h"

using namespace std;
char ch = 'a';

int main()
{
	Figure *f = new FigureAdapter(120, 200, 60, 40);
	f->draw();

	do
	{
		cout << "enter n for quit: ";
		ch = _getche();
	} while (ch != 'n');
	return 0;
}