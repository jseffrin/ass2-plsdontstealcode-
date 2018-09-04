#include "Rect.hpp"

RectanglePrism::RectanglePrism()
{
	xl = yl = zl = 0.0;
	rotate = 0.0;
	void setColor(float red_, float green_, float blue_);

}

RectanglePrism::RectanglePrism(double x_, double y_, double z_, double xl_, double yl_, double zl_, double Rotate_)
{
	x = x_;
	y = y_;
	z = z_;
	xl = xl_;
	yl = yl_;
	zl = zl_;
	rotate = Rotate_;


}

RectanglePrism::~RectanglePrism()
{
}
