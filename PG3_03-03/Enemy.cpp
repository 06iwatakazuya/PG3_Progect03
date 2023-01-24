#include "Enemy.h"
#include <stdio.h>

// メンバ関数ポインタテーブルの用意
void (Enemy::* Enemy::pFuncTable[])() =
{
	&Enemy::Approach,
	&Enemy::Shoot,
	&Enemy::GetAway
};

Enemy::Enemy()
{
	phase = 0;
}

Enemy::~Enemy() {}

void Enemy::Approach()
{
	printf("近づく\n");
}

void Enemy::Shoot()
{
	printf("攻撃\n");
}

void Enemy::GetAway()
{
	printf("離脱\n");
}

// 更新
void Enemy::Update()
{
	// デバック用
	printf("phase : %d\n", phase);

	// 現在の行動フェーズを実行する
	(this->*pFuncTable[phase])();

	// 次の行動フェーズに移行する
	phase++;
	if (phase > 2) {
		phase = 0;
	}
}

// 描画
void Enemy::Draw()
{
	printf("(enemy draw)\n");
}