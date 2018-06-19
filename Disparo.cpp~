#include "Disparo.h"
#include <ncurses.h>

Disparo::Disparo(int x,int y,int x2,int y2){
	this->x=x;
	this->y=y;
	this->x2=x2;
	this->y2=y2;
}
Disparo::Disparo(){

}void Disparo::setX(int x){
   this-> x=x;
}
int Disparo::getX(){
   return x;
}
void Disparo::setY(int y){
   this-> y=y;
}
int Disparo::getY(){
   return y;
}
void Disparo::setX2(int x2){
   this-> x2=x2;
}
int Disparo::getX2(){
   return x2;
}
void Disparo::setY2(int y2){
   this-> y2=y2;
}
int Disparo::getY2(){
   return y2;
}

int Disparo::Proyectil(int x,int y,int x2,int y2){
	start_color();
	int i,f;//Cooordenadas de donde este la trompa
	init_pair(1, COLOR_RED,COLOR_RED);

	attron(COLOR_PAIR(1));

	mvprintw(x,y, " ");

	for(int i=x; i<x2;i--){

	mvprintw(i,y," ");


	}
	return 0;


}
