#include "Thanos.h"
#include <ncurses.h>

Thanos::Thanos(int x,int y,int tx,int ty){
	this->x=x;
	this->y=y;
	this->tx=tx;
	this->ty=ty;
	
	
	initscr();
	start_color();
	init_pair(1,COLOR_BLACK,COLOR_BLACK);
	init_pair(2,COLOR_YELLOW,COLOR_YELLOW);
	for(int i=0;i<8;i++){
	attron(COLOR_PAIR(1));
	mvprintw(x,i," ");
	mvprintw(x-1,i," ");
	mvprintw(x-2,i," ");
	mvprintw(x-3,i+1," ");
	mvprintw(x-4,i+1," ");
	mvprintw(x-5,i+1," ");
	mvprintw(x-6,i+1," ");
	mvprintw(x-7,i-1," ");
	mvprintw(x-8,i-2," ");
	mvprintw(x-9,i-2," ");
	mvprintw(x-10,i," ");
	
	
	
	}
	
}




Thanos::Thanos(){

}void Thanos::setX(int x){
   this-> x=x;
}
int Thanos::getX(){
   return x;
}
void Thanos::setY(int y){
   this-> y=y;
}
int Thanos::getY(){
   return y;
}
void Thanos::setTx(int tx){
   this-> tx=tx;
}
int Thanos::getTx(){
   return tx;
}
void Thanos::setTy(int ty){
   this-> ty=ty;
}
int Thanos::getTy(){
   return ty;
}
