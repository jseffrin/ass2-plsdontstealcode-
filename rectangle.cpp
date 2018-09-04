//draw rectange thingy

#include "Shape.hpp"
#include "rectangle.hpp"

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



rectangle::rectangle() : Shape() {
	xlen = 1;
	ylen = 1;
	zlen = 1;
}
rectangle::rectangle(double xlen, double ylen, double zlen) : Shape() {
	this->xlen = xlen;
	this->ylen = ylen;
	this->zlen = zlen;
}
rectangle::rectangle(double xlen, double ylen, double zlen, double x, double y, double z) : Shape(x, y, z) {
	this->xlen = xlen;
	this->ylen = ylen;
	this->zlen = zlen;
}
rectangle::~rectangle()
{

}

double Shape::getX() {
	return x;
}
double Shape::getY() {
	return y;
}
double Shape::getZ() {
	return z;
}
double rectangle::GetlengthX()
{
	return xlen
}
double rectangle::GetlengthY()
{
	return ylen
}
double rectangle::GetlengthZ()
{
	return zlen
}
void rectangle::Setlengths(double xlen, double ylen, double zlen)
{
	xlen = x;
	ylen = y;
	zlen = z;
}
rectangle::drawrectangle(double x, double y, double z)
{
	
	glBegin(GL_QUADS);							// floats are in form (x,y,z)

	glColor3d(0.0, 1.0, 1.0);				//yellow (red + green) turqoise (green + blue)
	glVertex3d(x / 2, y, z / 2);				//Top face (top right vertex)
	glVertex3d(-x / 2, y, z / 2);				//Top face (top left vertex)
	glVertex3d(-x / 2, y, -z / 2);				//Top face (bottom left vertex)
	glVertex3d(x / 2, y, -z / 2);				//Top face (bottom right vertex)

	glColor3d(0.0, 1.0, 1.0);
	glVertex3d(x / 2, 0, z / 2);				//Bottom face (top right vertex)
	glVertex3d(-x / 2, 0, z / 2);				//Bottom face (top left vertex )
	glVertex3d(-x / 2, 0, -z / 2);			//Bottom face (bottom left vertex)
	glVertex3d(x / 2, 0, -z / 2);				//Bottom face (bottom left vertex)

	glColor3d(0.0, 1.0, 1.0);
	glVertex3d(x / 2, y, -z / 2);				//Front Face (top right vertex)
	glVertex3d(-x / 2, y, -z / 2);				//Front Face (top left vertex)
	glVertex3d(-x / 2, 0, -z / 2);				//Front Face (bottom left vertex)
	glVertex3d(x / 2, -0, -z / 2);				//Front Face (bottom right)

	glColor3d(0.0, 1.0, 1.0);
	glVertex3d(x / 2, y, z / 2);				//Back face (top right)
	glVertex3d(-x / 2, y, z / 2);			//Back face (top left)
	glVertex3d(-x / 2, 0, z / 2);				//Back face (bottom left)
	glVertex3d(x / 2, 0, z / 2);				//Back face (bottom right)

	glColor3d(0.0, 1.0, 1.0);
	glVertex3d(-x / 2, y, z / 2);				//Left face (top right)
	glVertex3d(-x / 2, y, -z / 2);				//Left face (top left)
	glVertex3d(-x / 2, 0, -z / 2);				//Left face (bottom right)
	glVertex3d(-x / 2, 0, z / 2);				//Left face (bottom left)

	glColor3d(0.0, 1.0, 1.0);
	glVertex3d(x / 2, y, z / 2);				//Right face(top right)
	glVertex3d(x / 2, y, -z / 2);				//Right face (top left)
	glVertex3d(x / 2, 0, -z / 2);				//Right face (bottom left)
	glVertex3d(x / 2, 0, z / 2);				//Right face (bottom right)

	glEnd();
}

void rectangle::draw()
{
	static GLUquadric * myQuadric = gluNewQuadric();
	glPushMatrix();
	positionInGL();
	setColorInGL();
	glRotatef(-90, 1, 0, 0);
	drawrectangle(10, 10, 10);
	glPopMatrix();

}