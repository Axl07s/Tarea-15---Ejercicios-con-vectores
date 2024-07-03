// Autor: Axel Molineros
// Fecha: 01-07-2024
// 

#include <iostream>
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

int main ()
{

    
    int x [] = { 10, 6, 34, 4, 2, 7, 15, 1, 100, 56, 33 };
    cout << endl <<"Tamaño del vector "<< sizeof( x );
    cout << endl <<"Tamaño de un entero "<< sizeof ( int );
    int MAX = sizeof ( x ) / sizeof ( int );

    cout << endl << "Vector original ";
    ImprimeVector ( x, MAX); //Imprime vector original
    cout << endl << endl <<"Vector ordenado ";
    OrdenSecuencial ( x, MAX );
    ImprimeVector ( x, MAX ); //Imprime el vector ordenado

    return 0;

}