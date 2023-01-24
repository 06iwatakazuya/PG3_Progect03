#include "Enemy.h"
#include <stdio.h>

// �����o�֐��|�C���^�e�[�u���̗p��
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
	printf("�߂Â�\n");
}

void Enemy::Shoot()
{
	printf("�U��\n");
}

void Enemy::GetAway()
{
	printf("���E\n");
}

// �X�V
void Enemy::Update()
{
	// �f�o�b�N�p
	printf("phase : %d\n", phase);

	// ���݂̍s���t�F�[�Y�����s����
	(this->*pFuncTable[phase])();

	// ���̍s���t�F�[�Y�Ɉڍs����
	phase++;
	if (phase > 2) {
		phase = 0;
	}
}

// �`��
void Enemy::Draw()
{
	printf("(enemy draw)\n");
}