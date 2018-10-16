#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
char ch = 'a';

int main()
{
	do
	{

		cout << "enter n for quit: ";
		ch = _getche();
	} while (ch != 'n');
	return 0;
}