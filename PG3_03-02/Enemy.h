#pragma once

class Enemy
{
public:
	static bool isAllDead;
	Enemy() { isAllDead = true; }
	~Enemy() { isAllDead = false; }
};