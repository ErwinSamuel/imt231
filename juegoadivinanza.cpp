#include <iostream>
using namespace std;
int main(){
std::cout<<"***************************************"<<endl;
std::cout<<"*Bienvenido al juego de la Adivinanza!*"<<endl;
std::cout<<"***************************************"<<endl;

int numero_secreto = 42;
cout <<"El numero secreto es ... " << numero_secreto << " No lo digas a nadie!" <<endl;

int adivina;
cout << "¿Cual es el numero? " ;
cin >> adivina;
cout << "El valor de su  numero es: " << adivina << endl;

if(adivina== numero_secreto){
cout << "felicitaciones!!! ... adivino el numero secfreto" << endl;
 }
else if(adivina > numero_secreto){
 cout << "EL numero ingresado es mayor que el numero secreto" << endl;
  }
 else{ 
 cout << "El numero incresado es menor que el numero secreto " <<endl; }
}
