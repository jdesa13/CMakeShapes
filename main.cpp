
#include <iostream>
#include <vector>
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

////////////////////////////////////////////////


//Example of creating vector of 'shapes' and looking at area.
   std::vector<shape *> myshapes;

   myshapes.push_back(new rectangle(4,5));
   myshapes.push_back(new triangle(4, 5));

   for(int i =0; i<myshapes.size(); i++)
	   std::cout << myshapes[i]->area() << '\n';

   std::cout << std::endl;

   // Just another example of a loop structure
   for (auto elem : myshapes)
	   std::cout << elem->area() << '\n';

   for (auto elem : myshapes)
   {
	   delete elem;
	   elem = NULL;
   }

   // all three prints should return same answers



	return 0;
}
