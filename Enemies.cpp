#include "Enemies.h"
#include <ncurses.h>
#include <stdlib.h>
#include <time.h>



Enemies::Enemies(int x,int y,int tx,int ty){
	this->x=x;
	this->y=y;
	this->tx=tx;
	this->ty=ty;
	


}
Enemies::Enemies(int x,int y){
	this->x=x;
	this->y=y;
	this->tx=tx;
	this->ty=ty;

	
	//Crear
	

		start_color();
		init_pair(17,COLOR_WHITE,COLOR_WHITE);
		init_pair(9,COLOR_BLACK,COLOR_BLACK);
		//Pintar negro
		attron(COLOR_PAIR(9));
		//mvprintw(x,ỳ," ");
		mvprintw(x,y+3," ");
		mvprintw(x,y+5," ");//Parte de abajo
	
		mvprintw(x-1,y+1," ");	//BOCA
		mvprintw(x-1,y+2," ");
		mvprintw(x-1,y+3," ");
		mvprintw(x-1,y+4," ");
		mvprintw(x-1,y+5," ");  //<-
		
				mvprintw(x-4,y+1," ");
				mvprintw(x-4,y+6," ");
				
						mvprintw(x-6,y," ");
						mvprintw(x-6,y+6," ");
		
								mvprintw(x-6,y+3," ");
								mvprintw(x-6,y+4," ");
									mvprintw(x-6,y+5," ");
		
		attroff(COLOR_PAIR(9));




	//Pintar Blanco
		attron(COLOR_PAIR(17));		
		mvprintw(x,y+1," ");
		mvprintw(x,y+2," ");
		mvprintw(x,y+4," ");
		
		mvprintw(x-1,y," ");
		
		mvprintw(x-1,y+6," ");
		mvprintw(x-2,y," ");
		mvprintw(x-2,y+1," ");
		mvprintw(x-2,y+2," ");
		mvprintw(x-2,y+3," ");
		mvprintw(x-2,y+4," ");
		mvprintw(x-2,y+5," ");
		mvprintw(x-2,y+6," ");
		
		
				mvprintw(x-3,y," ");
				mvprintw(x-3,y+1," ");
				mvprintw(x-3,y+2," ");
				mvprintw(x-3,y+3," ");
				mvprintw(x-3,y+4," ");
				mvprintw(x-3,y+5," ");
				mvprintw(x-3,y+6," ");
				
				mvprintw(x-4,y," ");
				mvprintw(x-4,y+2," ");
				mvprintw(x-4,y+3," ");
				mvprintw(x-4,y+4," ");
				mvprintw(x-4,y+6," ");
				
				
			mvprintw(x-5,y," ");
			mvprintw(x-5,y+1," ");
			mvprintw(x-5,y+2," ");
			mvprintw(x-5,y+3," ");
			mvprintw(x-5,y+4," ");
			mvprintw(x-5,y+5," ");
			mvprintw(x-5,y+6," ");
			
			
					mvprintw(x,y+4," ");
					mvprintw(x,y+5," ");
					
					mvprintw(x-6,y+1," ");
					mvprintw(x-6,y+5," ");
					
					mvprintw(x-7,y," ");
					mvprintw(x-7,y+6," ");
					
					
					mvprintw(x-3,y-1," ");
					mvprintw(x-3,y-2," ");
					mvprintw(x-2,y-2," ");
					mvprintw(x-3,y-2," ");
					mvprintw(x-1,y-2," ");
					
					
					mvprintw(x-3,y+7," ");
					mvprintw(x-3,y+8," ");
					mvprintw(x-2,y+8," ");
					mvprintw(x-1,y+8," ");
				
			
				
					
					attroff(COLOR_PAIR(17));
}
Enemies::Enemies(){

}void Enemies::setX(int x){
   this->x=x;
    
}

/*int Enemies::crear(int x,int y){
	initscr();
		start_color();
		init_pair(17,COLOR_WHITE,COLOR_WHITE);
		init_pair(9,COLOR_BLACK,COLOR_BLACK);
		//Pintar negro
		attron(COLOR_PAIR(9));
		//mvprintw(x,ỳ," ");
		mvprintw(x,y+3," ");
		mvprintw(x,y+5," ");//Parte de abajo
	
		mvprintw(x-1,y+1," ");	//BOCA
		mvprintw(x-1,y+2," ");
		mvprintw(x-1,y+3," ");
		mvprintw(x-1,y+4," ");
		mvprintw(x-1,y+5," ");  //<-
		
				mvprintw(x-4,y+1," ");
				mvprintw(x-4,y+6," ");
				
						mvprintw(x-6,y," ");
						mvprintw(x-6,y+6," ");
		
								mvprintw(x-6,y+3," ");
								mvprintw(x-6,y+4," ");
									mvprintw(x-6,y+5," ");
		
		attroff(COLOR_PAIR(9));




	//Pintar Blanco
		attron(COLOR_PAIR(17));		
		mvprintw(x,y+1," ");
		mvprintw(x,y+2," ");
		mvprintw(x,y+4," ");
		
		mvprintw(x-1,y," ");
		
		mvprintw(x-1,y+6," ");
		mvprintw(x-2,y," ");
		mvprintw(x-2,y+1," ");
		mvprintw(x-2,y+2," ");
		mvprintw(x-2,y+3," ");
		mvprintw(x-2,y+4," ");
		mvprintw(x-2,y+5," ");
		mvprintw(x-2,y+6," ");
		
		
				mvprintw(x-3,y," ");
				mvprintw(x-3,y+1," ");
				mvprintw(x-3,y+2," ");
				mvprintw(x-3,y+3," ");
				mvprintw(x-3,y+4," ");
				mvprintw(x-3,y+5," ");
				mvprintw(x-3,y+6," ");
				
				mvprintw(x-4,y," ");
				mvprintw(x-4,y+2," ");
				mvprintw(x-4,y+3," ");
				mvprintw(x-4,y+4," ");
				mvprintw(x-4,y+6," ");
				
				
			mvprintw(x-5,y," ");
			mvprintw(x-5,y+1," ");
			mvprintw(x-5,y+2," ");
			mvprintw(x-5,y+3," ");
			mvprintw(x-5,y+4," ");
			mvprintw(x-5,y+5," ");
			mvprintw(x-5,y+6," ");
			
			
					mvprintw(x,y+4," ");
					mvprintw(x,y+5," ");
					
					mvprintw(x-6,y+1," ");
					mvprintw(x-6,y+5," ");
					
					mvprintw(x-7,y," ");
					mvprintw(x-7,y+6," ");
					
					
					mvprintw(x-3,y-1," ");
					mvprintw(x-3,y-2," ");
					mvprintw(x-2,y-2," ");
					mvprintw(x-3,y-2," ");
					mvprintw(x-1,y-2," ");
					
					
					mvprintw(x-3,y+7," ");
					mvprintw(x-3,y+8," ");
					mvprintw(x-2,y+8," ");
					mvprintw(x-1,y+8," ");
				
			
				
					
					attroff(COLOR_PAIR(17));
					
			
return 0;

}*/






int Enemies::eliminar(int x,int y){
	
	start_color();
		init_pair(17,COLOR_WHITE,COLOR_WHITE);
		init_pair(9,COLOR_BLACK,COLOR_BLACK);
		//Pintar negro
		attron(COLOR_PAIR(9));
		//mvprintw(x,ỳ," ");
		mvprintw(x,y+3," ");
		mvprintw(x,y+5," ");//Parte de abajo
	
		mvprintw(x-1,y+1," ");	//BOCA
		mvprintw(x-1,y+2," ");
		mvprintw(x-1,y+3," ");
		mvprintw(x-1,y+4," ");
		mvprintw(x-1,y+5," ");  //<-
		
				mvprintw(x-4,y+1," ");
				mvprintw(x-4,y+6," ");
				
						mvprintw(x-6,y," ");
						mvprintw(x-6,y+6," ");
		
								mvprintw(x-6,y+3," ");
								mvprintw(x-6,y+4," ");
									mvprintw(x-6,y+5," ");
		
		




	//Pintar Blanco
		
		mvprintw(x,y+1," ");
		mvprintw(x,y+2," ");
		mvprintw(x,y+4," ");
		
		mvprintw(x-1,y," ");
		
		mvprintw(x-1,y+6," ");
		mvprintw(x-2,y," ");
		mvprintw(x-2,y+1," ");
		mvprintw(x-2,y+2," ");
		mvprintw(x-2,y+3," ");
		mvprintw(x-2,y+4," ");
		mvprintw(x-2,y+5," ");
		mvprintw(x-2,y+6," ");
		
		
				mvprintw(x-3,y," ");
				mvprintw(x-3,y+1," ");
				mvprintw(x-3,y+2," ");
				mvprintw(x-3,y+3," ");
				mvprintw(x-3,y+4," ");
				mvprintw(x-3,y+5," ");
				mvprintw(x-3,y+6," ");
				
				mvprintw(x-4,y," ");
				mvprintw(x-4,y+2," ");
				mvprintw(x-4,y+3," ");
				mvprintw(x-4,y+4," ");
				mvprintw(x-4,y+6," ");
				
				
			mvprintw(x-5,y," ");
			mvprintw(x-5,y+1," ");
			mvprintw(x-5,y+2," ");
			mvprintw(x-5,y+3," ");
			mvprintw(x-5,y+4," ");
			mvprintw(x-5,y+5," ");
			mvprintw(x-5,y+6," ");
			
			
					mvprintw(x,y+4," ");
					mvprintw(x,y+5," ");
					
					mvprintw(x-6,y+1," ");
					mvprintw(x-6,y+5," ");
					
					mvprintw(x-7,y," ");
					mvprintw(x-7,y+6," ");
					
					
					mvprintw(x-3,y-1," ");
					mvprintw(x-3,y-2," ");
					mvprintw(x-2,y-2," ");
					mvprintw(x-3,y-2," ");
					mvprintw(x-1,y-2," ");
					
					
					mvprintw(x-3,y+7," ");
					mvprintw(x-3,y+8," ");
					mvprintw(x-2,y+8," ");
					mvprintw(x-1,y+8," ");
				
			
				
					
					attroff(COLOR_PAIR(9));
					refresh();
	


return 0;
}


bool atacar(){
	srand(time(NULL));	
	int deci = rand()%1+10;
	
	if(deci%2==0){
			for(int i =0;i<0;i++){
			
			
			}
	
	
	}

}
int Enemies::getX(){
   return x;
}
void Enemies::setY(int y){
   this->y=y;
}
int Enemies::getY(){
   return y;
}

void Enemies::setTx(int tx){
   this-> tx=tx;
}
int Enemies::getTx(){
   return tx;
}
void Enemies::setTy(int ty){
   this->ty=ty;
}
int Enemies::getTy(){
   return ty;
}
