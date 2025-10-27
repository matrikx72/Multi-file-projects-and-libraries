#pragma once
class Quadrilateral : public Shapes
{
private:

	double __side_a, __side_b, __side_c, __side_d;
	double __angle_A, __angle_B, __angle_C, __angle_D;

public:

	Quadrilateral(double side_a, double side_b, double side_c, double side_d,
		     double angle_A, double angle_B, double angle_C, double angle_D);
	
	double get_side_a() const; 
	double get_side_b() const;
	double get_side_c() const;
	double get_side_d() const; 
	double get_angle_A() const; 
	double get_angle_B() const; 
	double get_angle_C() const; 
	double get_angle_D() const; 

	virtual void print_side() const;

	virtual void print_angle() const;
};
class Parallelogram : public Quadrilateral
{
public:
	Parallelogram(double side_a, double side_b, double angle_A, double angle_B);
};
class Rectangle : public Parallelogram
{
public:
	Rectangle(double side_a, double side_b);
};
class Rhombus : public Parallelogram
{
public:
	Rhombus(double side, double angle_A, double angle_B);
};
class Square : public Rectangle
{
public:
	Square(double side);
};