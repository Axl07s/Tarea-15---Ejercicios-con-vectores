// Autor: Axel Molineros
// Fecha:03-07-2024
//7) Diseñe la función que invierte el orden de los elementos de un vector.
//Por ejemplo, si el vector tiene estos elementos: 10, 3, 6, 78, 19, 100, 14
//la función debe invertirlos de esta forma:  14, 100, 19,  78, 6, 3, 10

#include <iostream>
using namespace std;

const int MAX_SIZE = 7;

//Funcion que invierte el orden de los elementos de un vector
void InvierteVector ( int vec[], int size){
    int i = 0; //Indice inicial
    int f = size - 1; //Indice final

   if ( size > 1 ){
        do {
            //Intercambia las posiciones de los elementos
            int aux = vec[i];
            vec[i] = vec[f];
            vec[f] = aux;
            //Mueve los indice hacia el centro
            i++;
            f--;
        } while (i < f );
   }
}
//Funcion que imprime los elementos del vector
void ImprimeVector (const int vec[], int size){
    for (int i = 0; i < size; i++){
        cout<< vec[i] << " ";
    }
    cout<<endl;
}
int main (){
    int vec[MAX_SIZE] = { 20, 35, 14, 85, 4, 2, 8};

    //Imprimir el vector original
    cout<<endl<<"Vector original: ";
    ImprimeVector(vec, MAX_SIZE);

    // Invertir el vector
    InvierteVector(vec, MAX_SIZE);

    //Imprime el vector invertido
    cout<<endl<<"Vector invertido: ";
    ImprimeVector(vec, MAX_SIZE);

 return 0;
}
