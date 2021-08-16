#pragma once
class Entity
{
private:
	

public:

	void set_position(int x, int y, char character);

	void movement(int x, int y, char character, int input, int direction);

	void collided(Entity* entity, int how_far_apart);

};

