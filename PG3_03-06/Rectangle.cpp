#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size()
{
	area = height * width;
}

void Rectangle::Draw()
{
	printf("��`�̖ʐ� : %f\n", area);
}
