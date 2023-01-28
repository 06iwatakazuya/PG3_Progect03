#pragma once
class IShape
{
public:
	IShape();

	~IShape();

public:
	virtual void Size() = 0;

	virtual void Draw() = 0;
};

