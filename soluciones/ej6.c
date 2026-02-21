#include <stdio.h> 
int main() {
//Declara:
//int m[2][4];
    int m[2][3];
//1. Imprime direcciones de todos los elementos.
    for(int i = 0; i < 2; i++ ){
        for(int j = 0; j < 3; j++){
            printf("[%x]", &m[i][j]);
        }
        printf("\n");
    }
    return 0; 
}
//2. Determina si almacenamiento es por filas o columnas.
//El almacenamiento es por filas, por que primero se llena toda la fila i, luego se llena la fila j
//3. Deduce fórmula de dirección de m[i][j].
//Direccion = Base + [ i × C + j ] × F
//Con "C" siendo el numero de columnas del arreglo y F el numero de filas del arreglo
