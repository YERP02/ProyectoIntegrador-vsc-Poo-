#include"Cuadrado.h"
#include"Triangulo.h"
#include"Rectangulo.h"
#include"IShape.cpp"
#include <iostream>

using namespace std;
/*
void Lienzo(IShape* shape) {
	shape->draw();
}

void Clear() {
	cout << "\x1B[2J\x1B[H";
}
*/

class Menu
{
private:
	int opc,tipo,lado,Alto,x,y;

	public:
		
		Cuadrado cuadrado;
		Triangulo triangulo;
		Rectangulo rectangulo;

		void opcion() {
			do {
				//Clear();
				system("cls");
				//opciones
				cout << endl << "1.-Cudrado " << endl;
				cout << "2.-Triangulo " << endl;
				cout << "3.-Rectangulo " << endl;
				cout << "0.-Salir " << endl;
				cin >> opc;

				//menu
				switch (opc)
				{

				case 1:

					cout << "Elige tipo de cuadrado: " << endl << "1) lleno" << endl << "2) vacio" << endl;
					cin >> tipo;
					cout << "Escribe la medida del lado:" << endl;
					cin >> lado;
					cout << "elige la posicion x: ";
					cin >> x;
					cout << "elige la posicion y: ";
					cin >> y;
					//Clear();
					system("cls");
					cuadrado.setLado(lado);
					cuadrado.getLado();
					cuadrado.setTipo(tipo);
					cuadrado.getTipo();
					cuadrado.setX(x);
					cuadrado.setY(y);
					cuadrado.draw();
					//Lienzo(&cuadrado);

					break;

				case 2:
					cout << "Escribe la medida del lado:" << endl;
					cin >> lado;
					cout << "elige la posicion x: ";
					cin >> x;
					cout << "elige la posicion y: ";
					cin >> y;
					//Clear();
					system("cls");
					triangulo.setLado(lado);
					triangulo.getLado();
					triangulo.setX(x);
					triangulo.setY(y);
					triangulo.draw();
					//Lienzo(&triangulo);

					break;

				case 3:

					cout << "Escribe la medida del lado:" << endl;
					cin >> lado;
					cout << "Escribe la medida de alto: " << endl;
					cin >> Alto;
					cout << "elige la posicion x: ";
					cin >> x;
					cout << "elige la posicion y: ";
					cin >> y;
					//Clear();
					system("cls");
					rectangulo.setLado(lado);
					rectangulo.getLado();
					rectangulo.setAlto(Alto);
					rectangulo.getAlto();
					rectangulo.setX(x);
					rectangulo.setY(y);
					rectangulo.draw();
					//Lienzo(&triangulo);

					break;

				case 0:
					//Clear();
					system("cls");
					printf("\t\tFin del Programa.\n\n");
					break;

				default:
					//Clear();
					system("cls");
					printf("\t\tOpcion incorrecta intente de nuevo\n");

					break;
				}
				
			} while (opc != 0);
			
		}	
		
};