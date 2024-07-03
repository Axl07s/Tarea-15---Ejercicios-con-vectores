// Autor: Axel Molineros
// Fecha:03-07-2024
// 3) Diseñe la función que determine si un entero existe dentro de un vector de enteros.

#include <iostream>
using namespace std;

bool EnteroVector ( int vec[], int size, int num){
    for ( int i = 0; i < size; i++){
        if (vec[i] == num){
            return true;
        }
    }
    return false;
}

int main (){
    int vec[] = {5, 1, 9, 4, 6}; // Vector de los enteros
    int size = sizeof(vec) / sizeof(vec[0]); // Calcula el tamaño del vector
    int num = 9;

    //Verifica si el entero existe en el vector
    if (EnteroVector(vec, size, num)) {
        cout <<endl<< "El número " << num << " existe en el vector.";
    } else {
        cout <<endl<<"El número " << num << " no existe en el vector.";
    }

    return 0;
}
