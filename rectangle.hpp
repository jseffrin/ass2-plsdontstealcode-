//Rectangular prism class
//makes a rectangular prism 
#pragma once

#include"Shape.hpp"

class rectangle : public Shape
{
public:
	rectangle();
	rectangle(double xlen, double ylen, double zlen);
	rectangle(double xlen, double ylen, double zlen, double x, double y, double z);
	virtual ~rectangle();
	void draw();
	//setters
	void Setlengths(double xlen, double ylen, double zlen);
	//getters 
	double GetlengthX();
	double GetlengthY();
	double GetlengthZ();

	void drawrectangle(double lenx, double ylen, double zlen);

private:
	double xlen, ylen, zlen;
};

/*rectangle : public Shape::rectangle : public Shape()
{
}

rectangle : public Shape::~rectangle : public Shape()
{
}
*/
