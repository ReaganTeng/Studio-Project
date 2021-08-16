#pragma once
#include "characters.h"
#include <string>
using namespace std;


class Mobs
{
public:
	Mobs();
	~Mobs();

	struct mob
	{
		string enemyName;
		int maxHP;
		int physicalAttack;
		//int magicalAttack;
		//int physicalDefence;
		//int magicDefence;
		//int expDrop;
		//int itemDrop;
		int goldDrop;
		bool boss = false;
		int hp = maxHP;

		/*
		mob(string enemyName, int maxHP, int physicalAttack, int magicalAttack, int physicalDefence, int magicDefence, int expDrop, int itemDrop, int AI, string imgSrc, int goldDrop;)
		{
			this->enemyName = enemyName;
			this->maxHP = maxHP;
			this->physicalAttack = physicalAttack;
			this->magicalAttack = magicalAttack;
			this->physicalDefence = physicalDefence;
			this->magicDefence = magicDefence;
			this->expDrop = expDrop;
			this->itemDrop = itemDrop;
			this->AI = AI;
			this->imgSrc = imgSrc;
			this->goldDrop = goldDrop;
		}
		*/
	};

	/////////////////////////////MOBS///////////////////////////////

	/////AREA 1/////////FIELD
	mob mobRat;
	mob mobBat;
	mob mobGoblin;
	mob mobGoblinMage;
	mob mobYoungGoblin;
	mob mobSpider;
	/*
	mob mobGiantSpider;
	mob mobCockroach;
	mob mobRatGroup;
	mob mobGuard;
	mob mobGuardMage;
	mob mobRabidDog;
	mob mobGoblinBoss;
	mob mobSpiderQueen;
	mob mobWizard;
	mob mobDemonLord;
	*/

	////////////////////////ENEMY CREATION FUNCTIONS

	int getRandomInt(int min, int max);
	void generateEnemyStats(mob& mob);
	mob determineMonster(int mapZone);
	void mobWeakAtk();
	void mobStrongAtk();

};