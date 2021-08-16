#include "characters.h"
#include<iostream>
#include<random>
#include<string>




Player::~Player() {

}
void Player::SetLevel(int num)
{
	level = num;
}

int Player::GetLevel()
{
	return level;
}

void Player::SetMaxHp(int num)
{
	maxHp = num;
}

int Player::GetMaxHp()
{
	return maxHp;
}

void Player::SetCurrHp(int num)
{
	currHp = num;
}

int Player::GetCurrHp()
{
	return currHp;
}

void Player::SetMaxMp(int num)
{
	maxMp = num;
}

int Player::GetMaxMp()
{
	return maxMp;
}

void Player::SetCurrMp(int num)
{
	currMp = num;
}

int Player::GetCurrMp()
{
	return currMp;
}

void Player::SetClass(int num)
{
	pClass = num;
}

int Player::GetClass()
{
	return pClass;
}

void Player::SetName(string input)
{
	name = input;
}

string Player::GetName()
{
	return name;
}

void Player::SetMap(int num)
{
	currMap = num;
}

int Player::GetMap()
{
	return currMap;
}

int Player::getRandomInt(int min, int max)
{
	return rand() % (max - min + 1) + min;
}
void Player::initaliseStats() {//stats when spwanning
	SetLevel(1);//just there for no reason LOL doesnt alter gameplay
	//map spwan
	SetName("Poggers");
	SetMap(0);
	SetMaxHp(250);
	SetCurrHp(250);
	SetMaxMp(50);
	SetCurrMp(50);
}
//spell casting and stuff
int Player::phySlash() {
	int spellcost = 10;
	int damage = 50;
	int Fdamage = damage;
	if (currMp >= spellcost) {
		currMp = currMp - spellcost;
	}
	else {
		damage = 0;
	}
	return Fdamage;
}
