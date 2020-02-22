#include "ShapeMaker.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"


	ShapeMaker::ShapeMaker()
	{
		circle = new Circle();
		rectangle = new Rectangle();
		square = new Square();
	}

	void ShapeMaker::drawCircle()
	{
		circle->draw();
	}

	void ShapeMaker::drawRectangle()
	{
		rectangle->draw();
	}

	void ShapeMaker::drawSquare()
	{
		square->draw();
	}

