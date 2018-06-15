#include <iostream>
#include <ncurses.h>
using namespace std;
using std::cout;
/*char[][] construir();
void print(char[][]);
*/

int inicio();


int main(){
inicio();
	return 0;

}//Fin del main


/*char[][] contruir(){
	temp[][] =new char[5][5];
	
	temp[4][0] = '*';
	temp[4][1] = '*';
	temp[4][2] = '*';
	temp[4][3] = '*';
	temp[4][4] = '*';


	temp[3][1] = '*';
	temp[3][2] = '*';
	temp[3][3] = '*';
	temp[4][0] = '*';
	temp[4][0] = '*';


		
	temp[2][1] = '*';
	temp[2][3] = '*';


	temp[1][2] = '*';



}*/

int inicio(){
int x=40,y=58,tx=0,ty=0;
initscr();
char key = ' ';
start_color();
init_pair(1,COLOR_WHITE,COLOR_WHITE);
init_pair(2,COLOR_BLACK,COLOR_BLACK);
init_pair(17,COLOR_BLACK,COLOR_WHITE);
init_pair(2,COLOR_BLUE,COLOR_BLUE);
bool seguir=true;

	
		while(seguir) {
		tx=x;
		ty=y;
		
		attron(COLOR_PAIR(17));
		mvprintw(x,y," ");
			mvprintw(x-1,y," ");
			mvprintw(x-1,y+1," ");
			mvprintw(x-2,y," ");
			mvprintw(x-2,y+1," ");
			mvprintw(x-2,y+2," ");
			mvprintw(x-3,y," ");
			mvprintw(x-2,y+2," ");
			mvprintw(x-2,y+3," ");
			mvprintw(x-2,y+4," ");
			mvprintw(x-2,y+5," ");
			mvprintw(x-2,y+6," ");
			mvprintw(x-2,y+7," ");
			mvprintw(x-2,y+8," ");
			mvprintw(x-2,y+9," ");
			mvprintw(x-2,y+10," ");
			mvprintw(x-2,y+11," ");
			mvprintw(x-3,y+3," ");
			mvprintw(x-3,y+4," ");
			mvprintw(x-3,y+5," ");
			mvprintw(x-3,y+5," ");
			mvprintw(x-3,y+6," ");
			mvprintw(x-3,y+7," ");
			mvprintw(x-3,y+8," ");
			mvprintw(x-4,y+5," ");
			mvprintw(x-4,y+6," ");
			mvprintw(x+5,y+6," ");
			mvprintw(x+1,y+5," ");
			mvprintw(x+1,y+6," ");
			
			
			key = getch();
		
	if(key=='q'){
		seguir=false;
	}

		}
return 0;
}
