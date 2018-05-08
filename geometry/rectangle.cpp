#include "rectangle.h"

rectangle::rectangle()
{
	width = height = 0.0f;
}

rectangle::rectangle(int a, int b)
{
	width = a; height = b; 
}

int rectangle::area()
{
	return width * height;
}