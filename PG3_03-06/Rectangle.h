#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	void Size() override;

	void Draw() override;

private:
	float height = 5;

	float width = 7;

	float area = 0;
};

