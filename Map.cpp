#include "Map.h"
#include <iostream>

Map::Map(void)
{
	map_height = 20;
	map_width = 40;
}

void Map::print_map(void)
{
	//print the roof
	for (int i = 0; i < map_width; i++)
	{
		std::cout << "#";	
	}

	std::cout << std::endl;

	//print the sides
	for (int i = 0; i < map_height; i++)
	{
		for (int j = 0; j < map_width; j++)
		{
			if (j == 0 && j == map_width - 1)
			{
				std::cout << "#";
			}
			else
			{
				std::cout << " ";
			}
			
		}
		std::cout << std::endl;
	}

	
	//print the bottom
	for (int i = 0; i < map_width; i++)
	{
		std::cout << "#";
	}
	
}

Map::~Map(void)
{
}
