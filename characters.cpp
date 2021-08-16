#include "characters.h"
#include<iostream>
#include<random>
#include<string>




Player::~Player() {

}
int Player::getRandomInt(int min, int max)
{
	return rand() % (max - min + 1) + min;
}
void Player::initaliseStats() {//stats when spwanning
	level = 1;//just there for no reason LOL doesnt alter gameplay
	//map spwan
	name = "Poggers";
	currMap = 0;
	maxHp = 250;
	currHp = maxHp;
	maxMp = 50;
	currMp = maxMp;
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
