#pragma once
#include <iostream>
#include<string>
#include<random>
using namespace std;



class Player {
public:
	Player();
	~Player();
	int level;
	int pClass;
	int maxHp;//his max hp
	int currHp;// his current hp
	int maxMp;// his maxMP,(mightnot be implemented)
	int currMp;//current MP(same as max mp)
	string name;
	int currMap;//map number
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