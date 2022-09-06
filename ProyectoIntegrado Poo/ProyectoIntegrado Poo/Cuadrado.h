#pragma once

#include"IShape.h"
#include <iostream>

using namespace std;

class Cuadrado:public IShape 
{
private:
	int X, Y, Lado,Tipo,z;
	
public:
	void setLado(int Lado){
		this->Lado = Lado;
	}
	int getLado() {
		if (Lado < 1)
			Lado = 2;
		return Lado;
	}
	void setX(int X) {
		this->X = X;
	}
	int getX() {
		if (X < 1)
			X = 2;
		return X;
	}
	void setY(int Y) {
		this->Y = Y;
	}
	int getY() {
		if (Y < 1)
			Y = 2;
		return Y;
	}
	void setTipo(int Tipo) {
		this->Tipo = Tipo;
	}
	int getTipo() {
		if (Tipo < 1) {
			Tipo = 1;
		}
		else if (Tipo > 2)
			Tipo = 2;

		return Tipo;
	}
	
	void draw() {
		char move;
		
		while ((move = cin.get()) != 'z') {
			//clear();
			system("cls");

			cout <<"Cordenadas x: "<< getX()<<endl;
			cout <<"Cordenadas y: "<< getY()<<endl;
			if (move == 'a') {
				X--;
			}
			else if (move == 's') {
				Y++;
			}
			else if (move == 'w') {
				Y--;
			}
			else if (move == 'd') {
				X++;
			}
			for (int c = 0; c < Y; c++) {
				cout << endl;

			}
			for (int j = 0; j < Lado; j++) {
				for (int z = 0; z < X; z++) {
					cout << " ";

				}
				for (int i = 0; i < Lado; i++) {

					if (Tipo == 1) {
						cout << " *";
					}
					else {
						if ((j == 0 || i == 0) || (j == (Lado - 1)) || (i == (Lado - 1))) {
							cout << " *";
						}
						else {
							cout << "  ";
						}
					}
				}
				cout << endl;
			}
		}
	}
};

