#include "Entity.h"
#include <iostream>

void Entity::set_position(int x, int y, char character)
{

	for (int i = 0; i < 20; i++)
	{
		if (i == y)
		{

			for (int j = 0; j < 20; j++)
			{
				if (j == x)
				{
					std::cout << character;
				}
				else
				{
					std::cout << " ";
				}
			}
		}
		else
		{
			std::cout << std::endl;
		}
	}
}

void Entity::movement(int x, int y, char character, int input, int direction)
{
	if (input == 1)
	{
		set_position(x, y, ' ');
		set_position(x, y += direction, character);
	}
	else if (input == 2)
	{
		set_position(x, y, ' ');
		set_position(x, y -= direction, character);
	}
	else if (input == 3)
	{
		set_position(x, y, ' ');
		set_position(x -= direction, y, character);
	}
	else if (input == 4)
	{
		set_position(x, y, ' ');
		set_position(x += direction, y, character);
	}
}

void Entity::collided(Entity* entity, int how_far_apart)
{
}


