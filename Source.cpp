#include <iostream>

#include "Map.h"
#include "Entities.h"

int main(void)
{
	Entities entity;

	entity.setting_entity();

	/*Map map;
	map.print_map();*/

	bool gameover;
	gameover = false;

	while (gameover == false)
	{
		int input;
		std::cin >> input;


		if (input < 5)
		{
			entity.movement(2, input);
		}


	}

	
}