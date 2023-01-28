#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main() {
	IShape* iShape1 = new Circle;
	IShape* iShape2 = new Rectangle;

	iShape1->Size();
	iShape1->Draw();

	iShape2->Size();
	iShape2->Draw();

	delete iShape1;
	delete iShape2;

	return 0;
}