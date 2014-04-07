#include "Complejo.h";
#include <iostream>;

using namespace std;

int main() {
	Complejo operando1, operando2, resultado;

	cout << "Parte real del primer operando: " << endl;
	cin >> operando1.real;
	cout << "Parte imaginaria del primer operando: " << endl;
	cin >> operando1.imaginario;

	cout << "Parte real del segundo operando: " << endl;
	cin >> operando2.real;
	cout << "Parte imaginaria del segundo operando" << endl;
	cin >> operando2.imaginario;

	cout << "La suma es : ";
	resultado.suma(operando1, operando2);
	resultado.mostrar();

	cout << "La resta es : ";
	resultado.resta(operando1, operando2);
	resultado.mostrar();

	cout << "La division es : ";
	resultado.division(operando1, operando2);
	resultado.mostrar();

	cout << "La multiplicacion es : ";
	resultado.multiplicacion(operando1, operando1);
	resultado.mostrar();

	return 0;
}

void Complejo::suma(Complejo z1, Complejo z2) {
	real = z1.real + z2.real;
	imaginario = z1.imaginario + z2.imaginario;
}

void Complejo::resta(Complejo z1, Complejo z2) {
	real = z1.real - z2.real;
	imaginario = z1.imaginario - z2.imaginario;
}

void Complejo::multiplicacion(Complejo z1, Complejo z2) {
	real = z1.real * z2.real - z1.imaginario * z2.imaginario;
	imaginario = z1.real * z2.imaginario + z2.imaginario * z2.real;
}

void Complejo::division(Complejo z1, Complejo z2){
	real = ((z1.real * z2.real) + (z1.imaginario * z2.imaginario)) / (pow(z2.real, 2) + pow(z2.imaginario, 2));                 // z1 real = a, z2 real = c, 
	imaginario = ((z1.imaginario * z2.real) - (z1.real * z2.imaginario)) / (pow(z2.real, 2) + pow(z2.imaginario, 2));           // z1 imag = b, z2 imag = d.
}

void Complejo::mostrar(){
	cout << "(" << real << "," << imaginario << "i)" << endl;
}

