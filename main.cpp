#include <iostream>
#include <ncurses.h>
#include <time.h>
#include "Disparo.h"
#include <stdlib.h>
#include <unistd.h>

using namespace std;
using std::cout;
using std::endl;


int inicio();
int disparo;
int main(){
inicio();
	return 0;

}//Fin del main




int inicio(){
int x=50,y=66,tx=0,ty=0;
initscr();
char key = ' ';
start_color();
init_pair(1,COLOR_WHITE,COLOR_WHITE);
init_pair(0,COLOR_BLACK,COLOR_BLACK);
init_pair(17,COLOR_BLACK,COLOR_WHITE);
init_pair(2,COLOR_BLUE,COLOR_BLUE);
init_pair(1, COLOR_RED,COLOR_RED);
init_pair(3,COLOR_YELLOW,COLOR_YELLOW);
bool seguir=true;

	
		while(seguir) {
		tx=x;
		ty=y;
		
			attron(COLOR_PAIR(17));
			//Parte derecha		
			mvprintw(x-1,y-1," ");
			mvprintw(x-2,y-1," ");
			mvprintw(x-2,y+12," ");		
			mvprintw(x-1,y-1," ");
			mvprintw(x,y-1," ");
			mvprintw(x-1,y," ");
			mvprintw(x-2,y," ");
			mvprintw(x-2,y+1," ");
			mvprintw(x-2,y+2," ");
			mvprintw(x-3,y-1," ");
			mvprintw(x-3,y+2," ");
			mvprintw(x-4,y+3," ");
			mvprintw(x-4,y+4," ");
			mvprintw(x-5,y+5," ");
			
			//Centro
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
			mvprintw(x-5,y+6," ");
			mvprintw(x-1,y+5," ");
			mvprintw(x-1,y+6," ");
			
			
			//Ala izquierda
			mvprintw(x-3,y+12," ");
			mvprintw(x-3,y+12," ");
			mvprintw(x-2,y+12," ");
			mvprintw(x-1,y+12," ");
			mvprintw(x-2,y+12," ");
			mvprintw(x-2,y+12," ");
			mvprintw(x-1,y+11," ");
			mvprintw(x-2,y+12," ");
			mvprintw(x-1,y+12," ");
			mvprintw(x,y+12," ");
			mvprintw(x-3,y+9," ");
			mvprintw(x-4,y+7," ");
			mvprintw(x-4,y+8," ");
			
			attroff(COLOR_PAIR(1));
				
		//COLORES
		attron(COLOR_PAIR(1));
		//DERECHA
	mvprintw(x-3,y-1," ");
	mvprintw(x-1,y+3," ");
	mvprintw(x-1,y+4," ");
	mvprintw(x,y+4," ");
	mvprintw(x,y+3," ");
	
		//IZQUIERDA
		mvprintw(x-3,y+12," ");	
		mvprintw(x-1,y+7," ");
		mvprintw(x-1,y+8," ");
		mvprintw(x,y+7," ");
		mvprintw(x,y+8," ");
		
		//TROMPA
		mvprintw(x-5,y+5," ");
		mvprintw(x-5,y+6," ");	
					
			
			
			attroff(COLOR_PAIR(1));
			
			
			attron(COLOR_PAIR(2));
			//CABINA
			mvprintw(x-3,y+5," ");
			mvprintw(x-3,y+6," ");
			mvprintw(x-3,y+4," ");
			mvprintw(x-3,y+7," ");
			
			mvprintw(x-4,y+5," ");
			mvprintw(x-4,y+6," ");
			
			//TROMPA
			attroff(COLOR_PAIR(2));
			
			attron(COLOR_PAIR(1));
			mvprintw(x-6,y+6," ");
			mvprintw(x-6,y+5," ");
			
			key = getch();
		
	if(key=='q'){
		seguir=false;
}else{
	if(key=='a'){

		attron(COLOR_PAIR(17));
			//Parte derecha		
			mvprintw(tx-1,ty-1," ");
			mvprintw(tx-2,ty-1," ");
			mvprintw(tx-2,ty+12," ");		
			mvprintw(tx-1,ty-1," ");
			mvprintw(tx,ty-1," ");
			mvprintw(tx-1,ty," ");
			mvprintw(tx-2,ty," ");
			mvprintw(tx-2,ty+1," ");
			mvprintw(tx-2,ty+2," ");
			mvprintw(tx-3,ty-1," ");
			mvprintw(tx-3,ty+2," ");
			mvprintw(tx-4,ty+3," ");
			mvprintw(tx-4,ty+4," ");
			mvprintw(tx-5,ty+5," ");
			
			//Centro
			mvprintw(tx-2,ty+2," ");
			mvprintw(tx-2,ty+3," ");
			mvprintw(tx-2,ty+4," ");
			mvprintw(tx-2,ty+5," ");
			mvprintw(tx-2,ty+6," ");
			mvprintw(tx-2,ty+7," ");
			mvprintw(tx-2,ty+8," ");
			mvprintw(tx-2,ty+9," ");
			mvprintw(tx-2,ty+10," ");
			mvprintw(tx-2,ty+11," ");
			mvprintw(tx-3,ty+3," ");
			mvprintw(tx-3,ty+4," ");
			mvprintw(tx-3,ty+5," ");
			mvprintw(tx-3,ty+5," ");
			mvprintw(tx-3,ty+6," ");
			mvprintw(tx-3,ty+7," ");
			mvprintw(tx-3,ty+8," ");
			mvprintw(tx-4,ty+5," ");
			mvprintw(tx-4,ty+6," ");
			mvprintw(tx-5,ty+6," ");
			mvprintw(tx-1,ty+5," ");
			mvprintw(tx-1,ty+6," ");
			
			
			//Ala izquierda
			mvprintw(tx-3,ty+12," ");
			mvprintw(tx-3,ty+12," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-1,ty+12," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-1,ty+11," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-1,ty+12," ");
			mvprintw(tx,ty+12," ");
			mvprintw(tx-3,ty+9," ");
			mvprintw(tx-4,ty+7," ");
			mvprintw(tx-4,ty+8," ");
			
			attroff(COLOR_PAIR(1));
			
			
			
		
			
		//COLORES
		attron(COLOR_PAIR(1));
		//DERECHA
	mvprintw(tx-3,ty-1," ");
	mvprintw(tx-1,ty+3," ");
	mvprintw(tx-1,ty+4," ");
	mvprintw(tx,ty+4," ");
	mvprintw(tx,ty+3," ");
	
		//IZQUIERDA
		mvprintw(tx-3,ty+12," ");	
		mvprintw(tx-1,ty+7," ");
		mvprintw(tx-1,ty+8," ");
		mvprintw(tx,ty+7," ");
		mvprintw(tx,ty+8," ");
		
		//TROMPA
		mvprintw(tx-5,ty+5," ");
		mvprintw(tx-5,ty+6," ");	
					
			
			
			attroff(COLOR_PAIR(1));
			
			
			attron(COLOR_PAIR(2));
			//CABINA
			mvprintw(tx-3,ty+5," ");
			mvprintw(tx-3,ty+6," ");
			mvprintw(tx-3,ty+7," ");
			mvprintw(tx-3,ty+4," ");
			
			mvprintw(tx-4,ty+5," ");
			mvprintw(tx-4,ty+6," ");
			
			//TROMPA
			attroff(COLOR_PAIR(2));
			
			attron(COLOR_PAIR(1));
			mvprintw(tx-6,ty+6," ");
			mvprintw(tx-6,ty+5," ");
			
			
			
			//Pintar negro
			attron(COLOR_PAIR(9));
			//Parte derecha		
			mvprintw(tx-1,ty-1," ");
			mvprintw(tx-2,ty-1," ");
			mvprintw(tx-2,ty+12," ");		
			mvprintw(tx-1,ty-1," ");
			mvprintw(tx,ty-1," ");
			mvprintw(tx-1,ty," ");
			mvprintw(tx-2,ty," ");
			mvprintw(tx-2,ty+1," ");
			mvprintw(tx-2,ty+2," ");
			mvprintw(tx-3,ty-1," ");
			mvprintw(tx-3,ty+2," ");
			mvprintw(tx-4,ty+3," ");
			mvprintw(tx-4,ty+4," ");
			mvprintw(tx-5,ty+5," ");
			
			//Centro
			mvprintw(tx-2,ty+2," ");
			mvprintw(tx-2,ty+3," ");
			mvprintw(tx-2,ty+4," ");
			mvprintw(tx-2,ty+5," ");
			mvprintw(tx-2,ty+6," ");
			mvprintw(tx-2,ty+7," ");
			mvprintw(tx-2,ty+8," ");
			mvprintw(tx-2,ty+9," ");
			mvprintw(tx-2,ty+10," ");
			mvprintw(tx-2,ty+11," ");
			mvprintw(tx-3,ty+3," ");
			mvprintw(tx-3,ty+4," ");
			mvprintw(tx-3,ty+5," ");
			mvprintw(tx-3,ty+5," ");
			mvprintw(tx-3,ty+6," ");
			mvprintw(tx-3,ty+7," ");
			mvprintw(tx-3,ty+8," ");
			mvprintw(tx-4,ty+5," ");
			mvprintw(tx-4,ty+6," ");
			mvprintw(tx-5,ty+6," ");
			mvprintw(tx-1,ty+5," ");
			mvprintw(tx-1,ty+6," ");
			
			
			//Ala izquierda
			mvprintw(tx-3,ty+12," ");
			mvprintw(tx-3,ty+12," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-1,ty+12," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-1,ty+11," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-1,ty+12," ");
			mvprintw(tx,ty+12," ");
			mvprintw(tx-3,ty+9," ");
			mvprintw(tx-4,ty+7," ");
			mvprintw(tx-4,ty+8," ");
			
		
			
			
			
		
			
		//COLORES
	
		//DERECHA
	mvprintw(tx-3,ty-1," ");
	mvprintw(tx-1,ty+3," ");
	mvprintw(tx-1,ty+4," ");
	mvprintw(tx,ty+4," ");
	mvprintw(tx,ty+3," ");
	
		//IZQUIERDA
		mvprintw(tx-3,ty+12," ");	
		mvprintw(tx-1,ty+7," ");
		mvprintw(tx-1,ty+8," ");
		mvprintw(tx,ty+7," ");
		mvprintw(tx,ty+8," ");
		
		//TROMPA
		mvprintw(tx-5,ty+5," ");
		mvprintw(tx-5,ty+6," ");	
					
			
		
			
			
		
			//CABINA
			mvprintw(tx-3,ty+5," ");
			mvprintw(tx-3,ty+6," ");
			mvprintw(tx-3,ty+7," ");
			mvprintw(tx-3,ty+4," ");
			
			mvprintw(tx-4,ty+5," ");
			mvprintw(tx-4,ty+6," ");
			
			//TROMPA
		
			
		
			mvprintw(tx-6,ty+6," ");
			mvprintw(tx-6,ty+5," ");
			attroff(COLOR_PAIR(9));
			
			
		y--;
		
	
		



		
	}else{		
	
	
		if(key=='d'){
		attron(COLOR_PAIR(17));
			//Parte derecha		
			mvprintw(tx-1,ty-1," ");
			mvprintw(tx-2,ty-1," ");
			mvprintw(tx-2,ty+12," ");		
			mvprintw(tx-1,ty-1," ");
			mvprintw(tx,ty-1," ");
			mvprintw(tx-1,ty," ");
			mvprintw(tx-2,ty," ");
			mvprintw(tx-2,ty+1," ");
			mvprintw(tx-2,ty+2," ");
			mvprintw(tx-3,ty-1," ");
			mvprintw(tx-3,ty+2," ");
			mvprintw(tx-4,ty+3," ");
			mvprintw(tx-4,ty+4," ");
			mvprintw(tx-5,ty+5," ");
			
			//Centro
			mvprintw(tx-2,ty+2," ");
			mvprintw(tx-2,ty+3," ");
			mvprintw(tx-2,ty+4," ");
			mvprintw(tx-2,ty+5," ");
			mvprintw(tx-2,ty+6," ");
			mvprintw(tx-2,ty+7," ");
			mvprintw(tx-2,ty+8," ");
			mvprintw(tx-2,ty+9," ");
			mvprintw(tx-2,ty+10," ");
			mvprintw(tx-2,ty+11," ");
			mvprintw(tx-3,ty+3," ");
			mvprintw(tx-3,ty+4," ");
			mvprintw(tx-3,ty+5," ");
			mvprintw(tx-3,ty+5," ");
			mvprintw(tx-3,ty+6," ");
			mvprintw(tx-3,ty+7," ");
			mvprintw(tx-3,ty+8," ");
			mvprintw(tx-4,ty+5," ");
			mvprintw(tx-4,ty+6," ");
			mvprintw(tx-5,ty+6," ");
			mvprintw(tx-1,ty+5," ");
			mvprintw(tx-1,ty+6," ");
			
			
			//Ala izquierda
			mvprintw(tx-3,ty+12," ");
			mvprintw(tx-3,ty+12," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-1,ty+12," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-1,ty+11," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-1,ty+12," ");
			mvprintw(tx,ty+12," ");
			mvprintw(tx-3,ty+9," ");
			mvprintw(tx-4,ty+7," ");
			mvprintw(tx-4,ty+8," ");
			
			attroff(COLOR_PAIR(1));
			
			
			
		
			
		//COLORES
		attron(COLOR_PAIR(1));
		//DERECHA
	mvprintw(tx-3,ty-1," ");
	mvprintw(tx-1,ty+3," ");
	mvprintw(tx-1,ty+4," ");
	mvprintw(tx,ty+4," ");
	mvprintw(tx,ty+3," ");
	
		//IZQUIERDA
		mvprintw(tx-3,ty+12," ");	
		mvprintw(tx-1,ty+7," ");
		mvprintw(tx-1,ty+8," ");
		mvprintw(tx,ty+7," ");
		mvprintw(tx,ty+8," ");
		
		//TROMPA
		mvprintw(tx-5,ty+5," ");
		mvprintw(tx-5,ty+6," ");	
					
			
			
			attroff(COLOR_PAIR(1));
			
			
			attron(COLOR_PAIR(2));
			//CABINA
			mvprintw(tx-3,ty+5," ");
			mvprintw(tx-3,ty+6," ");
			mvprintw(tx-3,ty+4," ");
			mvprintw(tx-3,ty+7," ");
			
			mvprintw(tx-4,ty+5," ");
			mvprintw(tx-4,ty+6," ");
			
			//TROMPA
			attroff(COLOR_PAIR(2));
			
			attron(COLOR_PAIR(1));
			mvprintw(tx-6,ty+6," ");
			mvprintw(tx-6,ty+5," ");
			
			
			
			
			//Pintar negro
			
			attron(COLOR_PAIR(9));
			//Parte derecha		
			mvprintw(tx-1,ty-1," ");
			mvprintw(tx-2,ty-1," ");
			mvprintw(tx-2,ty+12," ");		
			mvprintw(tx-1,ty-1," ");
			mvprintw(tx,ty-1," ");
			mvprintw(tx-1,ty," ");
			mvprintw(tx-2,ty," ");
			mvprintw(tx-2,ty+1," ");
			mvprintw(tx-2,ty+2," ");
			mvprintw(tx-3,ty-1," ");
			mvprintw(tx-3,ty+2," ");
			mvprintw(tx-4,ty+3," ");
			mvprintw(tx-4,ty+4," ");
			mvprintw(tx-5,ty+5," ");
			
			//Centro
			mvprintw(tx-2,ty+2," ");
			mvprintw(tx-2,ty+3," ");
			mvprintw(tx-2,ty+4," ");
			mvprintw(tx-2,ty+5," ");
			mvprintw(tx-2,ty+6," ");
			mvprintw(tx-2,ty+7," ");
			mvprintw(tx-2,ty+8," ");
			mvprintw(tx-2,ty+9," ");
			mvprintw(tx-2,ty+10," ");
			mvprintw(tx-2,ty+11," ");
			mvprintw(tx-3,ty+3," ");
			mvprintw(tx-3,ty+4," ");
			mvprintw(tx-3,ty+5," ");
			mvprintw(tx-3,ty+5," ");
			mvprintw(tx-3,ty+6," ");
			mvprintw(tx-3,ty+7," ");
			mvprintw(tx-3,ty+8," ");
			mvprintw(tx-4,ty+5," ");
			mvprintw(tx-4,ty+6," ");
			mvprintw(tx-5,ty+6," ");
			mvprintw(tx-1,ty+5," ");
			mvprintw(tx-1,ty+6," ");
			
			
			//Ala izquierda
			mvprintw(tx-3,ty+12," ");
			mvprintw(tx-3,ty+12," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-1,ty+12," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-1,ty+11," ");
			mvprintw(tx-2,ty+12," ");
			mvprintw(tx-1,ty+12," ");
			mvprintw(tx,ty+12," ");
			mvprintw(tx-3,ty+9," ");
			mvprintw(tx-4,ty+7," ");
			mvprintw(tx-4,ty+8," ");
			
		
			
			
			
		
			
		//COLORES
	
		//DERECHA
	mvprintw(tx-3,ty-1," ");
	mvprintw(tx-1,ty+3," ");
	mvprintw(tx-1,ty+4," ");
	mvprintw(tx,ty+4," ");
	mvprintw(tx,ty+3," ");
	
		//IZQUIERDA
		mvprintw(tx-3,ty+12," ");	
		mvprintw(tx-1,ty+7," ");
		mvprintw(tx-1,ty+8," ");
		mvprintw(tx,ty+7," ");
		mvprintw(tx,ty+8," ");
		
		//TROMPA
		mvprintw(tx-5,ty+5," ");
		mvprintw(tx-5,ty+6," ");	
					
			
		
			
			
		
			//CABINA
			mvprintw(tx-3,ty+5," ");
			mvprintw(tx-3,ty+6," ");
			mvprintw(tx-3,ty+7," ");
			mvprintw(tx-3,ty+4," ");
			
			mvprintw(tx-4,ty+5," ");
			mvprintw(tx-4,ty+6," ");
			
			//TROMPA
		
			
		
			mvprintw(tx-6,ty+6," ");
			mvprintw(tx-6,ty+5," ");
			attroff(COLOR_PAIR(9));
		y++;
		
		
	
	
		
		
				}else{
					if(key=='l'){
						int i=-7;
						int z=x;	
					int x1=-7;
							
							
							for(i=x;i>=0;i--){
								
							
							
								//Pintar negro
								/*attron(COLOR_PAIR(2));
								mvprintw(x1-1,y+6," ");
								attroff(COLOR_PAIR(2));*/
									attron(COLOR_PAIR(3));
										mvprintw(x+i,y+5," ");								
										mvprintw(x+i,y+6," ");
										attroff(COLOR_PAIR(3));	
							
										attron(COLOR_PAIR(9));
										mvprintw(x1+i,y+5," ");
										mvprintw(x1+i,y+6," ");	
										attroff(COLOR_PAIR(9));
										x1--;
																	
									refresh();
									usleep(5000);		
								
										
								
							
								
							}//FIN
							
							
																
					
					}
					
	
				}
			}
		}
}
		refresh();
return 0;
}
