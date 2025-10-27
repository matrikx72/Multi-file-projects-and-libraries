#include <iostream>
#include<string>
#include"Shapes.h"
#include "Triangle.h"
Triangle::Triangle(double side_a, double side_b, double side_c,
	double angle_A, double angle_B, double angle_C) :
	Shapes("Triangle"),
	__side_a(side_a), __side_b(side_b), __side_c(side_c),
	__angle_A(angle_A), __angle_B(angle_B), __angle_C(angle_C) {};

double Triangle::get_side_a() const { return __side_a; }
double Triangle::get_side_b() const { return __side_b; }
double Triangle::get_side_c() const { return __side_c; }
double Triangle::get_angle_A() const { return __angle_A; }
double Triangle::get_angle_B() const { return __angle_B; }
double Triangle::get_angle_C() const { return __angle_C; }

void Triangle::print_side() const 
{
	std::cout << "Side: a=" << __side_a << ", b=" << __side_b << ", c=" << __side_c << std::endl;
}
void Triangle::print_angle() const 
{
	std::cout << "Angle: A=" << __angle_A << ", B=" << __angle_B << ", C=" << __angle_C << std::endl;
}
RightTriangle :: RightTriangle(double side_a, double side_b, double side_c, double angle_A, double angle_B) :
	Triangle(side_a, side_b, side_c, angle_A, angle_B, 90.0)
{
	__name_shape = "Right Triangle";
}
IsoscelesTriangle ::IsoscelesTriangle(double side_a, double side_b, double angle_A, double angle_B) :
	Triangle(side_a, side_b, side_a, angle_A, angle_B, angle_A)
{
	__name_shape = "Isosceles Triangle";
}
EquilateralTriangle::EquilateralTriangle(double side)
	: Triangle(side, side, side, 60.0, 60.0, 60.0)
{
	__name_shape = "Equilateral Triangle";
}
