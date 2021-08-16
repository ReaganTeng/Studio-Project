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
	int get_position(void);

	void setting_entity(void);
	void movement(int direction, int input);

	~Entities(void);
};

