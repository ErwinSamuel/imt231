#include <iostream>
using namespace std;
int main(){
std::cout<<"***************************************"<<endl;
std::cout<<"*Bienvenido al juego de la Adivinanza!*"<<endl;
std::cout<<"***************************************"<<endl;

const int NUMERO_SECRETO = 42;

int adivina;

cout << "¿Cual es el numero? " ;
cin >> adivina;
cout << "El valor de su  numero es: " << adivina << endl;

bool acerto = adivina == NUMERO_SECRETO;
bool mayor = adivina > NUMERO_SECRETO;

if(acerto){
cout << "felicitaciones!!! ... adivino el numero secfreto" << endl;
 }
else if(mayor){
 cout << "EL numero ingresado es mayor que el numero secreto" << endl;
  }
 else{ 
 cout << "El numero incresado es menor que el numero secreto " <<endl; }
}
