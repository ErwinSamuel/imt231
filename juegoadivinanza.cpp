#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
cout<<"***************************************"<<endl;
cout<<"*Bienvenido al juego de la Adivinanza!*"<<endl;
cout<<"*Ingrese un numero en el rango: 1 a 100 *"<<endl;
cout<<"***************************************"<<endl;

srand(time(0));
const int NUMERO_SECRETO = 1 + rand() % 100;
cout<<"Numero secreto aleatoriogenerado entre 1 y 100:" << NUMERO_SECRETO << endl;
int adivina;
bool no_acerto = true;
int intentos = 0;
double puntos = 1000.0;
while(no_acerto){
 intentos ++;
cout << "Tentativa " << intentos << endl;
cout << "¿Cual es el numero? " ;
cin >> adivina;
double puntos_perdidos = abs(adivina - NUMERO_SECRETO)/2.0;
puntos = puntos-puntos_perdidos;
cout << "El valor de su  numero es: " << adivina << endl;

 bool acerto = adivina == NUMERO_SECRETO;
 bool mayor = adivina > NUMERO_SECRETO;

if(acerto){
  cout << "felicitaciones!!! ... adivino el numero secfreto" << endl;
  no_acerto = false;
 }
else if(mayor){
 cout << "EL numero ingresado es mayor que el numero secreto" << endl;
  }
 else{
 cout << "El numero incresado es menor que el numero secreto " <<endl;
 }
}
cout << "Finalizo el juego" << endl;
cout << "Adivino el numero secreto en " << intentos << " intentos."  << endl;
cout.precision(2);
cout << fixed;
cout << "Su puntuacion fue de " << puntos << " puntos " << endl;
}
