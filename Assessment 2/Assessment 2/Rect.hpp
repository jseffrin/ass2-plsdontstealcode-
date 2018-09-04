#include "Shape.hpp"


class RectanglePrism : public Shape
{

public:
	RectanglePrism();
	RectanglePrism(double x, double y,double z,double xl,double yl,double zl,double Rotate);
	~RectanglePrism();

private:
	double xl;
	double yl;
	double zl;
	double rotate;


}; 
