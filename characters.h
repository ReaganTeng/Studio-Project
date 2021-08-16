#pragma once
#include <iostream>
#include<string>
#include<random>
using namespace std;



class Player {
private:
	int level;
	int pClass;
	int maxHp;//his max hp
	int currHp;// his current hp
	int maxMp;// his maxMP,(mightnot be implemented)
	int currMp;//current MP(same as max mp)
	string name;
	int currMap;//map number



public:
	Player();
	~Player();

	void SetLevel(int num);
	int GetLevel();
	void SetMaxHp(int num);
	int GetMaxHp();
	void SetCurrHp(int num);
	int GetCurrHp();
	void SetMaxMp(int num);
	int GetMaxMp();
	void SetCurrMp(int num);
	int GetCurrMp();
	void SetClass(int num);
	int GetClass();
	void SetName(string input);
	string GetName();
	void SetMap(int num);
	int GetMap();


	int getRandomInt(int min, int max);
	void initaliseStats();
	struct Map
	{
		int x = 1 * 19;//x relatiive to map
		int y = 1 * 19;//y relative to map


	};
	int phySlash();
	void phySwing();

private:









};