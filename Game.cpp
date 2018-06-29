#include <ncurses.h>
#include <stdlib.h>
#include "Game.h"


Game::Game(){


}



void Game::start(){
		initscr();

   	init_pair(1,COLOR_WHITE,COLOR_WHITE);
   	init_pair(2,COLOR_BLACK,COLOR_BLACK);
   	attron(COLOR_PAIR(1));
   mvprintw (10, 10, "**************************************************\n");
   mvprintw (11, 10, "*************     SPACE INVADERS     *************\n");
   mvprintw (12, 10, "**************************************************\n");
   mvprintw (13, 10, "****         press 's' to start game          ****\n");
   mvprintw (14, 10, "****         press 'h' to print help          ****\n");
   mvprintw (15, 10, "****            press 'q' to quit             ****\n");
   mvprintw (16, 10, "****                                          ****\n");
   mvprintw (17, 10, "****              powered by dima             ****\n");
   mvprintw (18, 10, "**************************************************\n");
	attroff(COLOR_PAIR(2));
   refresh ();

  }