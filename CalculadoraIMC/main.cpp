#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// Calculador de IMC
int main() {

  double peso, altura, imc;
  cout << "\tIMC" << endl;;
  cout << "Ingrese el peso (kg): "<< endl;
	cin >> peso;
  cout << "Ingrese la altura (cm): " <<endl;
	cin>> altura;
	altura = altura / 100;  //transformar a cm
	//imc = peso / (altura * altura); (Otra forma de calcular IMC)
  imc = peso / pow(altura, 2);
	cout << "Tu IMC es de: " << fixed << setprecision(1)<< imc;

  return 0;
}
