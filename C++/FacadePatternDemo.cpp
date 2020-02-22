#include "FacadePatternDemo.h"
#include "ShapeMaker.h"


	int main()
	{
		ShapeMaker *shapeMaker = new ShapeMaker();

		shapeMaker->drawCircle();
		shapeMaker->drawRectangle();
		shapeMaker->drawSquare();

		delete shapeMaker;
	}

