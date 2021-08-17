#include<string>
#include"mob.h"
#include"characters.h"
#include<random>

struct mob
{
	string enemyName;
	int maxHP;
	int phyAtk;
	//int magicalAttack;
	//int physicalDefence;
	//int magicDefence;
	bool boss = false;
};
Mobs::Mobs() {
	//Rat
	mobRat.enemyName = "Rat";
	mobRat.maxHP = 20;
	mobRat.physicalAttack = 14;
	//mobRat.magicalAttack = 5;
	//mobRat.physicalDefence = 4;

	//Bat
	mobBat.enemyName = "Bat";
	mobBat.maxHP = 18;
	mobBat.physicalAttack = 13;

	mobGoblin.enemyName = "Goblin";
	mobGoblin.maxHP = 60;
	mobGoblin.physicalAttack = 35;
	//mobGoblin.magicalAttack = 5;
	//mobGoblin.physicalDefence = 20;
	//mobGoblin.magicDefence = 7;

	//Goblin Mage
	mobGoblinMage.enemyName = "Goblin Mage";
	mobGoblinMage.maxHP = 40;
	mobGoblinMage.physicalAttack = 9;
	/*
	mobGoblinMage.magicalAttack = 20;
	mobGoblinMage.physicalDefence = 15;
	mobGoblinMage.magicDefence = 50;
	mobGoblinMage.expDrop = 70;
	mobGoblinMage.itemDrop = 2;
	mobGoblinMage.goldDrop = 250;
	*/


}
Mobs::~Mobs()
{
}

int Mobs::getRandomInt(int min, int max)
{
	int randomNum;
	if (max == 0 && max == 0)
		randomNum = 0;
	else
		randomNum = rand() % (max - min + 1) + min;
	return randomNum;
}

void Mobs::generateEnemyStats(mob& mob)
{
	if (mob.boss == false)
	{
		mob.maxHP = getRandomInt(mob.maxHP * 0.8, mob.maxHP * 1.2);
		mob.hp = mob.maxHP;
		mob.physicalAttack = getRandomInt(mob.physicalAttack * 0.8, mob.physicalAttack * 1.2);
		/*mob.magicalAttack = getRandomInt(mob.magicalAttack * 0.8, mob.magicalAttack * 1.2);
		mob.physicalDefence = getRandomInt(mob.physicalDefence * 0.8, mob.physicalDefence * 1.2);
		mob.magicDefence = getRandomInt(mob.magicDefence * 0.8, mob.magicDefence * 1.2);
		mob.goldDrop = getRandomInt(mob.goldDrop * 0.8, mob.goldDrop * 1.2);
		mob.expDrop = getRandomInt(mob.expDrop * 0.8, mob.expDrop * 1.2);*/
	}
	else
	{
		mob.hp = mob.maxHP;
	}

}
Mobs::mob Mobs::determineMonster(int mapZone) {//determines monster spawn(not sure if implemented yet)
	mob monster;
	switch (mapZone)
	{case 1://map1
		switch(getRandomInt(1,2))
		{case 1://rat
			monster = mobRat;
			generateEnemyStats(monster);
			break;
		case 2://map1 bat
			monster = mobBat;
			generateEnemyStats(monster);
			break;
		}
		return monster;



	}



}
