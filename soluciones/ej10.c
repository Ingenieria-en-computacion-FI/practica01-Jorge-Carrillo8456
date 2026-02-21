#include <stdio.h> 

int main() {
//Declara:
//int gigante[10000000];
    int gigante[10000000];
    return 0; 
}

//Si falla: No fallo en si, pero si marca un error de compilacion
//1. explica causa: Se produce un desbordamiento de pila (stack overflow). Estás pidiendo aproximadamente 40 MB de memoria en un
//lugar (la pila) que suele medir menos de 8 MB
//2. indica dónde se almacena: en la pila (Stack)
//3. propone solución sin memoria dinámica:Para evitar el desbordamiento del stack sin recurrir a malloc o free, 
//debemos mover el array fuera del área de memoria de ejecución de funciones. La solución es declararlo como una variable global
//Ejemplo de codigo que lo haria
//#include <stdio.h>
//int gigante[10000000]; --------Aqui la variable esta declarada fuera del main, lo cual no la hace dependiente del stack asignado
//int main() {
//    gigante[0] = 100;
//    gigante[9999999] = 500;
//    printf("Array creado con éxito.\n");
//    printf("Primer elemento: %d\n", gigante[0]);
//    printf("Último elemento: %d\n", gigante[9999999]);
//
//    return 0;
//}
