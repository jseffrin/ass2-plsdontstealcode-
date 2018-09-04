#pragma once
#ifndef MTRN3500_OBSTACLE_H
#define MTRN3500_OBSTACLE_H

#include "Shape.hpp"

class cylinder : public Shape {

private:
	double radius;
	double height;

public:
	cylinder(double x_,double y_, double z_, double radius, double height);
	void draw();
	double getradius;
	double getheight;


};
#endif
