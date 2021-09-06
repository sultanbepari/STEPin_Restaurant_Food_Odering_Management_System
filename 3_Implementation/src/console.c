#include<windows.h>
#include "header.h"
#include "Initilization.h"

int console_color(int color)
{

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, color);
	return 0;
}
