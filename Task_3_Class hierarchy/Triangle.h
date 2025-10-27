#pragma once
class Triangle : public Shapes
{
private:
	double __side_a, __side_b, __side_c;
	double __angle_A, __angle_B, __angle_C;

public:

	Triangle(double side_a, double side_b, double side_c,
		   double angle_A, double angle_B, double angle_C);

	double get_side_a() const; 
	double get_side_b() const; 
	double get_side_c() const; 
	double get_angle_A() const;
	double get_angle_B() const;
	double get_angle_C() const; 

	virtual void print_side() const;
	
	virtual void print_angle() const;
	
};
class RightTriangle : public Triangle
{
public:
	RightTriangle(double side_a, double side_b, double side_c, double angle_A, double angle_B);
};

class IsoscelesTriangle : public Triangle
{
public:
	IsoscelesTriangle(double side_a, double side_b, double angle_A, double angle_B);
};
class EquilateralTriangle : public Triangle
{
public:
	EquilateralTriangle(double side);
};
