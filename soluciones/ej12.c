//Elaborar un programa que al recibir como dato una matriz cuadrada, asigne valores a un arreglo
//unidimensional aplicando el siguiente criterio
//**No se puede añadir en forma de texto el criterio espeficicado, pero este se encuentra en la practica**
#include <stdio.h>
int main() {
    int n;
    printf("¿De qué tamaño quieres la matriz? (n): ");
    scanf("%d", &n);
    float A[n][n];
    float B[n];
    printf("Introduce los números de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Fila %d, Columna %d: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        float suma = 0;
        float producto = 1;
        float suma_columna = 0;
        if (i % 3 == 1) {
            for (int j = 0; j <= i; j++) {
                suma = suma + A[i][j];
            }
            B[i] = suma;
        } 
        else if (i % 3 == 2) {
            for (int j = 1; j < n; j++) {
                producto = producto * A[j][i];
            }
            B[i] = producto;
        } 
        else {
            for (int j = 0; j < n; j++) {
                producto = producto * A[j][i];
                if (j <= i) {
                    suma_columna = suma_columna + A[j][i];
                }
            }
            if (suma_columna != 0) {
                B[i] = producto / suma_columna;
            } else {
                B[i] = 0;
            }
        }
        printf("Resultado B[%d] = %.2f\n", i, B[i]);
    }
    return 0;
}
