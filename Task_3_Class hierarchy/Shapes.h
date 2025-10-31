#pragma once
class Shapes
{
protected:
	std::string __name_shape;
public:
	Shapes(const std::string& name_shape);
	virtual ~Shapes() = default;
	std::string get_name() const;
	virtual void print_side() const;
	virtual void print_angle() const;
	virtual void print_info() const;
};