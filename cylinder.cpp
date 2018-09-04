
#include "Shape.hpp"
#include "cylinder.hpp"
#ifdef __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#elif defined(WIN32)
#include <Windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#else
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#endif

cylinder::cylinder(double x_, double y_, double z_, double radius, double height)
	: Shape(x_,y_,z_) {
	/*	getBlue->this = blue;
		getGreen->this = green;
		getRed->this = red;
		radius = radius_;
		height = height_;*/
}
void cylinder::draw() {
	/*static GLUquadric * newQuadric = gluNewQuadric();
	glPushMatrix();
	positionInGL();
	setColorInGL();
	glRotatef(-90, 0, 1, 0);
	glScalef(radius, radius, radius);
	gluCylinder(newQuadric, radius, radius, height, 5, 5);
	glPopMatrix();*/
};

double cylinder::getRadius() {
	return radius;
}
double cylinder::getheight() {
	return height;
}

//rectangle rectangularprism(10, 10, 10, 0, 0, 0);
	//rectangularprism.drawrectangle;
//cylinder somecylinder(10, 10, 10, 5, 10);
//somecylinder.draw;