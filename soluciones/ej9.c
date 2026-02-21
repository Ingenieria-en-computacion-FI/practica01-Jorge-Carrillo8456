
#include <stdio.h> 

int main() {
//Declara:
//int a[5];
    int a[5];
//Imprime:
//&a[-1]
//&a[5]
    printf("&a[-1] = %x\n", &a[-1]);
    printf("&a[5] = %x\n", &a[5]);
    return 0; 
}
//Explica:
//por qué compila: Por que solo esta asignando la dirección que le corresponde en el caso de que ese espacio existiera,
//por ejemplo, al ser -1, la indicación para este caso es “retrocede 4 bytes de la dirección del arreglo 0”, ademas de que los arreglos son 
//basicamente un apuntador especial con sus respectivas diferencias, por lo que realmente pueden existir los espacios negativos o 
//superiores a los que indica el arreglo, ya que la posición es relativa al punto de partida del elemento [0]
//por qué es peligroso: Por que si se intenta ingresar información o trabajar con esta, puede ser que esta ya este ocupada o cree choques en
//procesos, ademas de la obvia confusion que puede generar en el alumno 
//qué revela sobre memoria : Que la memoria es lineal y relativa a un punto de referencia y que existen muchas formas de acceder a diversas 
//direcciones de memoria
