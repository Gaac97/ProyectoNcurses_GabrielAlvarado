main:    main.cpp Disparo.o 
	g++ main.cpp Disparo.o -o main
main.o:	main.cpp Disparo.h 
	g++ -c main.cpp
Disparo:	Disparo.cpp Disparo.h
	g++ -c Disparo.cpp
clean:
	rm  *.o main 