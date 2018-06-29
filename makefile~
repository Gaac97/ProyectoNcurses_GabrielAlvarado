main:    main.cpp Disparo.o Enemies.o Thanos.o Game.o
	g++ main.cpp Disparo.o Enemies.o Thanos.o  Game.o -lncurses -o main
main.o:	main.cpp Disparo.h Enemies.h Thanos.h Game.h
	g++ -c main.cpp
Disparo:	Disparo.cpp Disparo.h
	g++ -c Disparo.cpp
Enemies:	Enemies.cpp Enemies.h
	g++ -c Enemies.cpp
Thanos:	Thanos.cpp Thanos.h
	g++ -c Thanos.cpp
Game:	Game.cpp Game.h
	g++ Game.cpp

clean:
	rm  *.o main 