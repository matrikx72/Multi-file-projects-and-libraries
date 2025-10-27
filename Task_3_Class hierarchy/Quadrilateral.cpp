#include <iostream>
#include<string>
#include"Shapes.h"
#include"Quadrilateral.h"


Quadrilateral::Quadrilateral(double side_a, double side_b, double side_c, double side_d,
		double angle_A, double angle_B, double angle_C, double angle_D) :
		Shapes("Quadrilateral"),
		__side_a(side_a), __side_b(side_b), __side_c(side_c), __side_d(side_d),
		__angle_A(angle_A), __angle_B(angle_B), __angle_C(angle_C), __angle_D(angle_D) {}

double Quadrilateral::get_side_a() const { return __side_a; }
double Quadrilateral::get_side_b() const { return __side_b; }
double Quadrilateral::get_side_c() const { return __side_c; }
double Quadrilateral::get_side_d() const { return __side_d; }
double Quadrilateral::get_angle_A() const { return __angle_A; }
double Quadrilateral::get_angle_B() const { return __angle_B; }
double Quadrilateral::get_angle_C() const { return __angle_C; }
double Quadrilateral::get_angle_D() const { return __angle_D; }

void Quadrilateral::print_side() const 
{
	std::cout << "Side: a=" << __side_a << ", b=" << __side_b << ", c=" << __side_c << ", d=" << __side_d << std::endl;
}
void Quadrilateral::print_angle() const 
{
	std::cout << "Angle: A=" << __angle_A << ", B=" << __angle_B << ", C=" << __angle_C << ", D=" << __angle_D << std::endl;
}
Parallelogram::Parallelogram(double side_a, double side_b, double angle_A, double angle_B) :
	Quadrilateral(side_a, side_b, side_a, side_b, angle_A, angle_B, angle_A, angle_B)
{
	__name_shape = "Parallelogram";
}
Rectangle::Rectangle(double side_a, double side_b)
	: Parallelogram(side_a, side_b, 90.0, 90.0)
{
	__name_shape = "Rectangle";
}
Rhombus::Rhombus(double side, double angle_A, double angle_B)
	: Parallelogram(side, side, angle_A, angle_B)
{
	__name_shape = "Rhombus";
}
Square::Square(double side) : Rectangle(side, side)
{
	__name_shape = "Square";
}
