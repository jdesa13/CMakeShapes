#include "shape.h"

#pragma once
#ifndef _H_RECTANGLE
#define _H_RECTANGLE
class rectangle : public shape {
public:
	rectangle();
	rectangle(int a, int b);
	~rectangle() {};
	int area();
};
#endif