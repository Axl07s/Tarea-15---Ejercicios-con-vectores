// Autor: Axel Molineros
// Fecha:03-07-2024
// 4) Diseñe la función que calcula la sumatoria de N elementos enteros almacenados en un vector.
// También diseñe la función que calcule el promedio de esos elementos.

#include <iostream>
using namespace std;

int MAX = 100; //Tamaño maximo del vector

//Para calcular la suma de los elementos del vector//
int SumaEnteros ( int vec[], int size){
    int suma = 0;
    for ( int i = 0; i < size; i++){
        suma += vec[i];
    }
    return suma; 
}

//Calcula el promedio de los elementos almacenados//
double PromedioEnteros ( int vec[], int size){
    if ( size == 0){
        return 0;  //Retorna 0 si el vector no tiene nada para evitar la division para 0
    }
    double promedio = (SumaEnteros(vec, size) * 1.0) / size;
    return promedio;
    
}

int main (){
    int vec[] = { 21, 10, 8, 5, 6, 21, 35, 18, 25};

    //Calcula y muestra la suma de los elementos
    int suma = SumaEnteros(vec, sizeof(vec) / sizeof (vec[0]));
    cout<<endl<<"La suma de los elementos es: "  << suma;

    //Calcula y muestra el promedio de los elementos
    double promedio = PromedioEnteros(vec, sizeof(vec) / sizeof (vec[0]));
    cout<<endl<<"El promedio de los elementos es: " << promedio;

 return 0;
}