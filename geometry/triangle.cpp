#include "triangle.h"

triangle::triangle()
{

	width = height = 0.0f;

}

triangle::triangle(int a, int b)
{

	width = a; height = b;

}

int triangle::area()
{

	return (width * height) / 2;

}
