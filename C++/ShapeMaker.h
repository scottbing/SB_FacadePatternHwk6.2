
#ifndef SHAPEMAKER
#define SHAPEMAKER


#include "Shape.h"

class ShapeMaker
{

private:
	Shape* circle;
	Shape* rectangle;
	Shape* square;

public:
	virtual ~ShapeMaker()
	{
		delete circle;
		delete rectangle;
		delete square;
	}

	ShapeMaker();

	virtual void drawCircle();
	virtual void drawRectangle();
	virtual void drawSquare();
};

#endif	//#ifndef SHAPEMAKER
