#include <stdio.h> 

int main() {
//Declara:
//int a[3];
//int b[3];
//int c[3];
    int a[3];
    int b[3];
    int c[3];

//1. Imprime todas las direcciones.
    for(int i = 0; i < 3; i++ ){
        printf("El elemento a[%d] tiene la direccion : %x\n", i, &a[i]);
        printf("El elemento b[%d] tiene la direccion : %x\n", i, &b[i]);
        printf("El elemento c[%d] tiene la direccion : %x\n", i, &c[i]);
    }
    return 0; 
}
//2. ¿Están juntos en memoria?
//Si, pero la asignación de los valores de la memoria fue desendente, ya que se llenaron primero los valores de la variable “c”, 
//luego los de “b” y finalmente “a”, llendo desde el arreglo numero 0,1,2 respectivamente lo cual eso ya estaba previsto
//3. ¿De qué depende?
//En este caso el rango de espacio de cada variable y un criterio de asignacion abritrario que decide el compilador
