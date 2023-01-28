#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	void Size() override;

	void Draw() override;

private:
	float pi = 3.14;

	float radius = 5;

	float area = 0;
};

