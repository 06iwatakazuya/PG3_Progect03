#include "Circle.h"
#include <stdio.h>

void Circle::Size()
{
	area = radius * radius * pi;
}

void Circle::Draw()
{
	printf("â~ÇÃñ êœ : %f\n", area);
}
