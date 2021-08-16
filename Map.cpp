#include "Map.h"
#include <iostream>
#include <string>
using namespace std;
Map::Map() {
	for (int i = 0; i < 40; i++) { // to make the horizontal axis
		for (int j = 0; j < 20; j++) {//vertical axis
			arr[i][j] = ' ';//make map empty so that entity spawn will be clear

		}

	}
}
Map::~Map() {

}
char Map::GetGrid(int x, int y) {
	return arr[x][y];//return 1 single grid of the 20 by 20 array and checking if its empty

}
void Map::SetGrid(int x, int y, char entity) {
	arr[x][y] = entity;//placing entity in the empty spot found
}
void Map::display(void) {
	for (int row = 1; row <= 40; ++row)
	{
		for (int col = 1; col <= (20 * 2); col++) {
			if ((row == 1) || (row == 40) || (col == 1) || (col == (20 * 2)))
				cout << '*';
			else
				cout << ' ';

		}
		cout << endl;
	}
	cout << endl;
}  