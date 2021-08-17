#pragma once
class Map {
private:
	char arr[120][120];
public:
	Map();
	~Map();
	char GetGrid(int x, int y);
	void SetGrid(int x, int y, char entity);
	void display(void);
};