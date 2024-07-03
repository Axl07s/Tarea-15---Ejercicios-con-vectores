// Autor: Axel Molineros
// Fecha: 01-07-2024
// Orden Secuencial

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

//Ordena el vector usando el algoritmo de ordenacion secuencial
void OrdenSecuencial ( int x [], int total )
{

    for ( int k = 0; k < total; k++ )
    {

        for ( int j = k + 1; j < total; j++ )
        {

            if ( x[ k ] > x[ j ] )
            {

                //Intercambiar los valores
                int aux = x [ k ];
                x [ k ] = x [ j ];
                x [ j ] = aux;
            }
        }
    }
}

void ImprimeVector ( int x [], int total )
{

    for ( int k = 0; k < total; k++ )
    {

        cout << endl << x [ k ];

    }

}

//Llenar el vector con numeros aleatorios
void VectorNumAleatorio ( int x [], int total )
{

    int limite_inf = 1;
    int limite_sup = 100;
    for ( int k = 0; k < total; k++)
    {

        int numero = limite_inf + rand ()% (( limite_sup + 1) - limite_sup );
        x [ k ] = numero;
    }
}

int main ()
{
    srand ( time (NULL));
    const int MAX = 30;
    //int x [] = { 10, 6, 34, 4, 2, 7, 15 };
    int x[ MAX ];
    VectorNumAleatorio ( x, MAX ); //Llenando el vector con numeros aletarios
    cout << endl << "Vector original ";
    ImprimeVector ( x, MAX); //Imprime vector original
    cout << endl << endl <<"Vector ordenado ";
    OrdenSecuencial ( x, MAX );
    ImprimeVector ( x, MAX ); //Imprime el vector ordenado

    return 0;

}