#include <iostream>

#include "Entity.h"
#include "Map.h"
#include "Player.h"
#include "Enemy.h"

int main(void)
{
	Entity* entity[2];

	Map map;
	//map.display();

	int player_x = 1;
	int player_y = 1;
	char player_character = 'P';

	int enemy_x = 1;
	int enemy_y = 3;
	char enemy_character = 'E';
	

	entity[0] = new Player;
	entity[0]->set_position(player_x, player_y, player_character);

	entity[1] = new Enemy;
	entity[1]->set_position(enemy_x, enemy_y, enemy_character);

	bool gameover = false;

	while (gameover == false)
	{
		int input;

		std::cin >> input;

		if (input == 1 ||
			input == 2 ||
			input == 3 ||
			input == 4)
		{
			
			entity[0]->movement(player_x, player_y, player_character, input, 1);
		}

		if (player_x - enemy_x <= 2 && input == 3)
		{
			std::cout << "collided";

		}
		//if another entity is at the player's right by 2 grids and player decided to go right
		else if (player_x - enemy_x <= -2 && input == 4)
		{
			std::cout << "collided";
		}
		//if another entity is at the player's below by 2 grids and player decided to go down
		else if (player_y - enemy_y <= 2 && input == 1)
		{
			std::cout << "collided";
		}
		//if another entity is at the player's up by 2 grids and player decided to go up
		else if (player_y - enemy_y <= -2 && input == 2)
		{
			std::cout << "collided";
		}
	}
}