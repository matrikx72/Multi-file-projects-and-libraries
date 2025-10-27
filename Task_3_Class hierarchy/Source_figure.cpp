#include <iostream>
#include<string>
#include"Shapes.h"
#include "Triangle.h"
#include"Quadrilateral.h"


int main()
{
	Triangle tr(5, 6, 3, 65, 43, 54);
	RightTriangle rt(3, 4, 5, 30, 60);
	IsoscelesTriangle it(5, 7, 50, 80);
	EquilateralTriangle et(6);

	Quadrilateral qu(4, 4, 4, 4, 78, 78, 78, 78);
	Rectangle rect(4, 8);
	Square sq(5);
	Parallelogram para(6, 10, 70, 110);
	Rhombus rh(7, 60, 120);

	Shapes* shapes[] = { &tr, &rt, &it, &et, &qu, &rect, &sq, &para, &rh };
	for (Shapes* shape : shapes) {
		shape->print_info();
	}
	return EXIT_SUCCESS;
}