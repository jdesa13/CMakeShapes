
#include <iostream>
#include "rectangle.h"
#include "shape.h"
#include "triangle.h"

int main(int argc, char *argv[]) {
	std::cout << "Hello Geometry Library Tester!" << std::endl;


	shape *rec = new rectangle();
	shape *tri = new triangle();

	rec->set_values(4, 5);
	tri->set_values(4, 5);

	std::cout << rec->area() << '\n';
	std::cout << tri->area() << '\n';
	std::cout << std::endl;

	delete rec;
	delete tri;

	rec = NULL;
	tri = NULL;

	return 0;
}
