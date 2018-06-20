main:    main.cpp Disparo.o Enemies.o
	g++ main.cpp Disparo.o Enemies.o -lncurses -o main
main.o:	main.cpp Disparo.h Enemies.h
	g++ -c main.cpp
Disparo:	Disparo.cpp Disparo.h
	g++ -c Disparo.cpp
Enemies:	Enemies.cpp Enemies.h
	g++ -c Enemies.cpp

clean:
	rm  *.o main 