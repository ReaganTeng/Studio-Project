#include "Map.h"
#include <iostream>
#include <string>
using namespace std;
Map::Map() {
	for (int i = 0; i < 40; i++) { // to make the horizontal axis
		for (int j = 0; j < 40; j++) {//vertical axis
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
	int row = 40;
	int col = 40;
	string UI = "########################################";// for map indication (UI)
	cout<< " "<< UI << endl;//horizontal axis
	for (int i = 0; i < row; i++) {
		cout << UI[i];
		for (int j = 0; j < col; j++) { // vertical axis
			cout << arr[i][j] ;

		}
		cout << " " << UI[i];
		cout << endl; // vertical axis
	}
	cout << " " << UI << endl;
}  