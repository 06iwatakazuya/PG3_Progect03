#include "SceneManager.h"
#include "DxLib.h"

SceneManager* SceneManager::GetInstance()
{
	static SceneManager instance;

	return &instance;
}

void SceneManager::ChangeScene(int sceneNo)
{
	switch (sceneNo) {
	case 0:
		// �w�i�F��ݒ肷��
		SetBackgroundColor(255, 0, 0);

		DrawFormatString(100, 150, GetColor(255, 255, 255), "SceneNo:%d", sceneNo, true);
		DrawFormatString(100, 170, GetColor(255, 255, 255), "Press Space to Scene Change", true);
		break;
	case 1:
		// �w�i�F��ݒ肷��
		SetBackgroundColor(0, 255, 0);

		//�V�[�����Ȃǂ�\��
		DrawFormatString(100, 150, GetColor(255, 255, 255), "SceneNo:%d", sceneNo, true);
		DrawFormatString(100, 170, GetColor(255, 255, 255), "Press Space to Scene Change", true);
		break;
	case 2:
		// �w�i�F��ݒ肷��
		SetBackgroundColor(0, 0, 255);

		//�V�[�����Ȃǂ�\��
		DrawFormatString(100, 150, GetColor(255, 255, 255), "SceneNo:%d", sceneNo, true);
		DrawFormatString(100, 170, GetColor(255, 255, 255), "Press Space to Scene Change", true);
		break;
	}
}
