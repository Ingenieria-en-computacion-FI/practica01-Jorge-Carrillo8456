#include <stdio.h> 

int main() {
//Declara:
//int a[6];
    int a[6];

//1. Imprime direcciones de todos los elementos.
    for(int i = 0; i < 6; i++ ){
        printf("El elemento a[%d] tiene la direccion : %x\n", i, &a[i]);
    }
    return 0; 
}
//2. Calcula diferencia entre direcciones consecutivas.
//La diferencia es de 4 bytes, que es el espacio en la memoria RAM que le corresponde a cada entero de manera normal
//3. Escribe fórmula general para dirección de a[i].
//Base + ( 4 X i ), con “i” que va desde 0 … n-1
