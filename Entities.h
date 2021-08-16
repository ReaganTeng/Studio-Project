#pragma once


class Entities
{
protected:
	int posX;
	int posY;
	char character;

public:


	Entities(void);

	void set_position(int x, int y);
	int get_x_position(void);
	int get_y_position(void);

	void setting_entity(void);
	void movement(int direction, int input);

	void collide(Entities* entity, int how_much_apart, int input);

	~Entities(void);
};

