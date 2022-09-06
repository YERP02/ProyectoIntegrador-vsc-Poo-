#pragma once
#include"IShape.h"
#include <iostream>

using namespace std;

class Rectangulo :public IShape
{
private:
	int Lado, Alto, X, Y, Z;

public:
	void setLado(int Lado) {
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
	void setAlto(int Alto) {
		this->Alto = Alto;
	}
	int getAlto() {
		if (Alto < 1)
			Alto = 2;
		return Alto;
	}
	void draw() {
		char move;

		while ((move = cin.get()) != 'z') {
			system("cls");
			cout << "Cordenadas x: " << getX() << endl;
			cout << "Cordenadas y: " << getY() << endl;
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
			for (int i = 0; i < Alto; i++) {
				for (int k = 0; k < X; k++) {
					cout << " ";
				}
				for (int j = 0; j < Lado; j++) {
					cout << " *";

				}
				cout<<endl;
			}
		}
	}

};