#include <iostream>
#include<string>
#include"Shapes.h"

Shapes::Shapes(const std::string& name_shape) :
	__name_shape(name_shape) {}
	
std::string Shapes::get_name() const
{
	return __name_shape;
}
void Shapes::print_side() const {};
void Shapes::print_angle() const {};
void Shapes::print_info( ) const 
{
	std::cout << get_name() << std::endl;
	print_side();
	print_angle();
	std::cout << std::endl;
}
	
