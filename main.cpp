#include <iostream>
#include<stdio.h>
#include <cstdlib>

using namespace std;

int main() {
	int dia;
	int mes;
    int nacimiento;
    int actual;
    int edad;
    char nombre[20];
    actual=2017;

	cout <<"Ingresa tu nombre: ";
	cin>>nombre;

	cout <<"Ingresa dia de nacimiento: ";
	cin>>dia;
	
	cout <<"Ingresa el mes: ";
	cin>>mes;
	
	cout <<"Ingresa annio: ";
	cin>>nacimiento;
	
    cout <<"HOLA: "<<nombre<<"\n";
  
    edad = actual - nacimiento;
  
	cout <<"Tienes: "<<edad<<" anios\n";
 
 
 	 if(dia >= 22 && mes == 12 || dia <= 20 && mes ==1){
            printf("Tu signo es: Capricornio\nElemento:Tierra");
           
        }
        if(dia >= 21 && mes == 1 || dia <= 18  && mes == 2){
         cout <<"Tu signo es: Acuario\nElemento:Aire";   
           
        }
        if(dia >= 19 && mes == 2 || dia <= 20 && mes == 3){
            cout <<"Tu signo es: Picis\nElemento:Agua";
           
        }
        if(dia >= 21 && mes == 3 || dia <= 20 && mes == 4){
            cout <<"Tu signo es: Aries\nElemento:Fuego";
         
        }
        if(dia >= 21 && mes == 4 || dia <= 21 && mes == 5){
           cout <<"Tu signo es: Tauro\nElemento:Tierra";
          
        }
        if(dia >= 22 && mes == 5 || dia <= 21 && mes == 6){
           cout <<"Tu signo es: Geminis\nElemento:Aire";
            
        }
        if(dia >= 22 && mes == 6 || dia <= 22 && mes == 7){
           cout <<"Tu signo es: Cancer\nElemento:Agua";
           
        }
        if(dia >= 23 && mes == 7 || dia <= 23 && mes == 8){
           cout <<"Tu signo es: Leo\nElemento:Fuego";
          
        }
        if(dia >= 24 && mes == 8 || dia <= 23 && mes == 9){
            cout <<"Tu signo es: Virgo\nElemento:Tierra";
           
        }
        if(dia >= 24 && mes == 9 || dia <= 23 && mes == 10){
           cout <<"Tu signo es: Libra\nElemento:Aire";
             
        }
        if(dia >= 24 && mes == 10 || dia <= 22 && mes == 11){
            cout <<"Tu signo es: Escorpion\nElemento:Agua";
           
        }
        if(dia >= 23 && mes == 11 || dia <= 21 && mes == 12){
            cout <<"Tu signo es: Sagitario\nElemento:Fuego";
            
        }
	cout <<"\n";
	system("PAUSE");
	return 0;
}
