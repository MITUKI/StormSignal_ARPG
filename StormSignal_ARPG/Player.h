﻿#include "Character.h"
#include "Window.h"
#include <DxLib.h>

#ifndef _PLAYER
#define _PLAYER

const float MoveSpeed = 5.0f;

class Player : public Character
{
private:
	int SkillSet[3][3][4];//x,y,{種類,レベル,経験値,CD}
	vector<int*> SkillList;
	Window SkillWindow;
	vector<Window> SkillPanels;
	vector<Image_2D> SkillImages;
	vector<Window> EquipmentPanels;
	vector<Image_2D> EquipmentImages;
	Window InfoPanel,InfoPanel2;
	int Equipments[3];
	POINT SkillCursorPoint;
	POINT ChangeSkillPoint;
	bool SkillChangeFlag;
	vector<int> EnableSkillList[3];

	int FontSmall,FontMiddle,FontBig;
public:
	void Initialize(b2World *World,void* UserData,float Density,float Friction,int MaxHP);
	void Ctrl(void);//操作
	void StepSkillWindow(void);
};

#endif