#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef THANOS_H
#define THANOS_H
class Thanos{
	protected:
		int x;
		int y;
		int tx;
		int ty;
	public:
		Thanos(int,int,int,int);
		Thanos();
		int getX();
		void setX(int);

		int getY();
		void setY(int);

		int getTx();
		void setTx(int);

		int getTy();
		void setTy(int);

};
#endif