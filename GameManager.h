#pragma once
#include "Clear.h"
#include "IScene.h"
#include "Stage.h"
#include "Title.h"
#include <Novice.h>
#include <memory>

class GameManager {
private:
	// シーンを保持するメンバ変数
	std::unique_ptr<IScene> sceneArr_[3];

	// どのステージを
	int currentSceneNo_;
	int prevSceneNo_;

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

public:
	GameManager();
	~GameManager();

	int Run();

private:
	IScene* iscene;
};