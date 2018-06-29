#include <iostream>
#include <ncurses.h>
#include <time.h>
#include "Disparo.h"
#include <stdlib.h>
#include <unistd.h>
#include "Enemies.h"
#include <vector>
#include <thread>
#include "Game.h"
#include <fstream>
using namespace std;
using std::cout;
using std::endl;

int menu();
void GuardarScore(vector<int>);
bool matar(int,int,int,int);
int moverY(int,int,int,int);
int inicio();
void disparo(int,int,int,int);
void crearEnemigos();

Enemies* E = new Enemies();
vector <Enemies*> naves; 
int score;
vector<int> Score;




void GuardarScore(vector<int> list){
  ofstream file("SCORE.txt");
  if (file.is_open()) {
    file<<"LISTA DE PUNTAJES"<<endl;
    for (int i = 0; i < list.size(); i++) {
      
        int temp = list.at(i);
        file<<"Puntaje: "<<list.at(i);
      	  

		}
	
	}
	 file.close();
}
int main(){
//vector <Enemies*> naves; 



char op= menu();
menu();
if(op=='1'){
	initscr();	
inicio();
}





	return 0;

}//Fin del main



int menu(){
initscr();

init_pair(1,COLOR_WHITE,COLOR_WHITE);
init_pair(2,COLOR_BLACK,COLOR_BLACK);
init_pair(3,COLOR_RED,COLOR_RED);
attron(COLOR_PAIR(3));
mvprintw(20,30,"BIENVENIDOS A LA AVENTURA");
mvprintw(19,30,"A-IZQUIERDA-D-DERECHA-L-DISPARAR");
mvprintw(10,30,"INFINITY WAR");


mvprintw(12,30,"ELIJA UN NIVEL");
mvprintw(13,30,"1.NIVEL 1");
mvprintw(14,30,"2.NIVEL 2");
mvprintw(15,30,"3.NIVEL 3");
mvprintw(16,30,"CTRL-C-SALIR");


char opcion;

opcion = getch();

attroff(COLOR_PAIR(3));
clear();
endwin();

return opcion;
}

void crearEnemigos(){
Enemies* e = new Enemies(10,22);

e =new Enemies(10,35);
naves.push_back(e);
e = new Enemies(10,55);
naves.push_back(e);
e= new Enemies(10,65);
naves.push_back(e);
e= new Enemies(10,75);
naves.push_back(e);

e= new Enemies(10,95);
naves.push_back(e);
e= new Enemies(10,115);
naves.push_back(e);
e= new Enemies(10,125);
naves.push_back(e);
e= new Enemies(10,135);
naves.push_back(e);

e= new Enemies(20,22);
naves.push_back(e);
e= new Enemies(20,35);
naves.push_back(e);
e= new Enemies(20,55);
naves.push_back(e);
e= new Enemies(20,65);
naves.push_back(e);

e= new Enemies(20,65);
naves.push_back(e);
e= new Enemies(20,75);
naves.push_back(e);
e= new Enemies(20,95);
naves.push_back(e);


e= new Enemies(20,115);
naves.push_back(e);

e= new Enemies(20,125);
naves.push_back(e);

e= new Enemies(20,135);
naves.push_back(e);

}


/*void* disparo(void* data,int x, int y){

vector <Enemies*> naves; 
Enemies* e = new Enemies(10,22);
//naves.push_back(e);
int i=-7;
int z=x;	
int x1=-7;
							
							
		for(i=x;i>=0;i--){
		
			attron(COLOR_PAIR(3));
				mvprintw(x+i,y+5," ");								
				mvprintw(x+i,y+6," ");
				attroff(COLOR_PAIR(3));	
							
				attron(COLOR_PAIR(9));
				mvprintw(x1+i,y+5," ");
				mvprintw(x1+i,y+6," ");
				mvprintw(x+i,y+5," ");											
				mvprintw(x+i,y+6," ");	
				attroff(COLOR_PAIR(9));
				matar(x,y); //Manda coordenadas
				x1--;
																	
				refresh();												
				usleep(7000);		
								
										
			if(matar(x,y)==true){
				e->eliminar(10,22);
				
		
										
			}


	}
	
}*///Fin del metodo

int moverY(int x,int y){
	if(y<60){
		return moverY(x,y-1);


	}else{
		return moverY(x,y+1);	
	
	}
		if(y==60){
			return moverY(x+6,y);
		
		
		}
	 }




bool matar(int x,int y,int x2,int y2){
	bool deci=false;
	if(x==x2&&y==y2){	
		return true;
	
	}

}




int inicio(){


int x=50,y=66,tx=0,ty=0;
initscr();
Enemies* e=new Enemies();
vector <Enemies*> naves; 
crearEnemigos();

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
						
					/*pthread_t thread1;
					pthread_create(thread1,NULL,disparo(),NULL); 	*/					
						
						int i;
						i=-7;
						int z=x;
						z=-7;	
						int j=y;
							
							
			for(i=x;i>=1;i--){
				attron(COLOR_PAIR(3));
				mvprintw(z,j+5,"*");								
				mvprintw(z,j+6,"*");
				attroff(COLOR_PAIR(3));	
				
				
				attron(COLOR_PAIR(0));
				mvprintw(i,j+5," ");
				mvprintw(i,j+6," ");
				
				attroff(COLOR_PAIR(0));
																	
				refresh();	
				
													
				usleep(4000);		
					for(int i=0;i<naves.size();i++){
					if(matar(x,y,i,22)==true){				
							E->eliminar(10,22);
						
					}
					
						}	
								
					}//FIN
					score =score+10;
					Score.push_back(score);	
					
					GuardarScore(Score);
					
					
								
					}
				
				}
			}
		}
}
		refresh();
return 0;
}