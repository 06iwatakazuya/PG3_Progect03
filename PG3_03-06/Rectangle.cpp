#include "Rectangle.h"
#include <stdio.h>

void Rectangle::Size()
{
	area = height * width;
}

void Rectangle::Draw()
{
	printf("‹éŒ`‚Ì–ÊÏ : %f\n", area);
}
