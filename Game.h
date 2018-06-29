#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef GAME_H
#define GAME_H
class Game{
	protected:
		int x;
		int y;
		int tx;
		int ty;
	public:
	Game();
		void start();

};
#endif