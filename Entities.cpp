#include "Entities.h"
#include <iostream>

Entities::Entities(void)
{
	posY = 1;
	posX = 1;

	character = 'C';
}


void Entities::set_position(int x, int y)
{
	posX = x;
	posY = y;
}

int Entities::get_position(void)
{
	return posX;
	return posY;
}

void Entities::setting_entity(void)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (i == posY && j == posX)
			{
				std::cout << character;
			}
			else
			{
				std::cout << " ";
			}
			
		}
	}
}


void Entities::movement(int direction, int input)
{
	if (input == 1)
	{
		posY = posY + direction;
		setting_entity();

	}
	else if (input == 2)
	{
		posY = posY - direction;
		setting_entity();
	}
	else if (input == 3)
	{
		posX = posX - direction;
		setting_entity();
	}
	else if (input == 4)
	{
		posX = posX + direction;
		setting_entity();
	}
}

Entities::~Entities(void)
{
}
