#include "shape.h"

#pragma once
#ifndef _H_TRIANGLE
#define _H_TRIANGLE
class triangle : public shape {
public:
	triangle();
	triangle(int a, int b);
	~triangle() {};
	int area();
};
#endif