#include <iostream>
#include <iomanip>
#include <conio.h>
#include "curAdapt.h"

using namespace std;
char ch = 'a';

int main()
{
	ItemA a;
	ItemZ *z;
	BaseABC *adA = new AdapterAZ(a);
	BaseABC *adZ = new AdapterAZ(z);


	//BaseABC *obj = new WrapperB(a);

	do
	{
		cout << "enter n for quit: ";
		ch = _getche();
	} while (ch != 'n');
	return 0;
}