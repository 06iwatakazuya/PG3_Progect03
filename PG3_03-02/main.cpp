#include <stdio.h>
#include <iostream>
#include "Enemy.h"

using namespace std;

bool Enemy::isAllDead;

int main() {
	int input;
	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	cout << Enemy::isAllDead << endl;
	cout << Enemy::isAllDead << endl;
	cout << Enemy::isAllDead << endl;

	printf("0:“G‚ªÁ‚¦‚é 1:‚»‚Ì‚Ü‚Ü ==>");
	scanf_s("%d", &input);
	if (input == 0)enemy1->isAllDead = false;

	cout << Enemy::isAllDead << endl;
	cout << Enemy::isAllDead << endl;
	cout << Enemy::isAllDead << endl;

	delete enemy1;
	delete enemy2;
	delete enemy3;

	return 0;
}