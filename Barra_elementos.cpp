// Autor: Axel Molineros
// Fecha:03-07-2024
// 5)  El vector X tiene los siguientes elementos: {10, 12, 6, 7, 15, 7, 9, 19}
// Diseñe la función que imprime una barra vertical por cada elemento del vector. Por ejemplo:
// * * * * * * * * * * (10)
// * * * * * * * * * * * * (12)
// * * * * * * (6)
// * * * * * * * (7)
// * * * * * * * * * * * * * * *(15) 

#include <iostream>
#include <string>

// Función para imprimir una barra vertical cada elemento del vector
void imprimeBarra(int vectorx[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < vectorx[i]; j++) {
            std::cout << "* ";
        }
        std::cout << "(" << vectorx[i] << ")" << std::endl;
    }
}

int main() {
    // Elementos del vector a imprimir con "*" 
    int vectorx[] = {1, 2, 5, 50, 25, 19, 17, 20}; // Vector de números a imprimir con '*'
    int size = sizeof(vectorx) / sizeof(vectorx[0]); // Calcula el tamaño del vector
    // Llama a la función imprimeBarra para imprimir las barras verticales
    imprimeBarra(vectorx, size);

    return 0;
}
