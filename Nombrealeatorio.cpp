// Autor: Axel Molineros
// Fecha:03-07-2024
// 6) Se tiene un vector de N nombres de personas.
// Diseñe la función que retorne el nombre de una persona aleatoriamente.

#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

const int MAX_SIZE = 5; //Tamaño del vector

//Funcion que retorna el nombre de una persona aleatoriamente
string NombresPersonas ( const string nombres[], int size){
    int nombre_aleatorio = rand () % size; //Genera un indice aleatorio
    return nombres [nombre_aleatorio];
}
int main (){
    string nombres [MAX_SIZE] = { "Kaleb", "Jeremy", "Larissa", "Dexy", "Mayra"};
    srand (time(NULL));

    //Llama a la funcion para obtener un nombre aleatorio 
    string nombreAleatorio = NombresPersonas ( nombres, MAX_SIZE);

    //Verifica si el nombre seleccionado no esta vacio y lo imprime
    if ( !nombreAleatorio.empty()){
        cout<<endl<<"Nombre seleccionado: " << nombreAleatorio;
    }
    else {
        cout<< " El vector de los nombres esta vacio";
    }

 return 0;
}