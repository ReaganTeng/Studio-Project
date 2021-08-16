#include "Entities.h"
#include <iostream>

Entities::Entities(void)
{
	posY = 3;
	posX = 3;

	character = 'C';
}


void Entities::set_position(int x, int y)
{
	posX = x;
	posY = y;
}

int Entities::get_x_position(void)
{
	return posX;
	
}

int Entities::get_y_position(void)
{
	return posY;
}

void Entities::setting_entity(void)
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (j == get_x_position() && i == get_y_position())
			{
				std::cout << character;
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

//entities* enitity means another entity, not the player
void Entities::collide(Entities* entity, int how_much_apart, int input)
{
	//if another entity is at the player's left by 2 grids and player decided to go left
	if (posX - entity -> posX == 2 && input == 3)
	{
		delete entity;

	}
	//if another entity is at the player's right by 2 grids and player decided to go right
	else if (posX - entity->posX == -2 && input == 4)
	{
		delete entity;
	}
	//if another entity is at the player's below by 2 grids and player decided to go down
	else if (posY - entity->posY == 2 && input == 1)
	{
		delete entity;
	}
	//if another entity is at the player's up by 2 grids and player decided to go up
	else if (posY - entity->posY == -2 && input == 2)
	{
		delete entity;
	}
}

Entities::~Entities(void)
{
}
