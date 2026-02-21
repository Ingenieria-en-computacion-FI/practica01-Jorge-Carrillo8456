//Un estudiante afirma:
//Si a[0] = 1000 entonces a[10] = 1010.
//Demuestra formalmente si es correcto.
//La afirmación del estudiante es correcta debido a que no se esta hablando de direcciones de memoria, ya que textualmente 
//se dice que a[0] = 1000 y que a[10] = 1010, es decir, indica que se esta almacenando en dichos espacios del arreglo, la cosa
//seria diferente si fuera “&a[0] = 1000 y que &a[10] = 1010” ya que ahí se esta especificando la dirección de memoria, y en ese
//caso seria imposible de manera normal, ya que la estructura diría que se necesita que el tamaño en bytes del del tipo de variable 
//sea exclusivamente de 1, esto solo se puede hacer indicando previamente cual es el tamaño en bytes que se le va a designar a 
//cada elemento o que el tipo de arreglo sea char, al cual se le designa un byte de manera natural
//********NOTA**********
//A manera de prueba, el siguiente codigo demuestra que si pueden tomar esos valores, tanto en como direccion como variable
//pero depende del caso del cual se este hablando, la Especificacion va a venir en el reporte. 
#include <stdio.h> 
int main() {
    char a[11];
    int b[11];
    for(int i = 0; i < 11; i++ ){
        printf("El elemento a[%d] tiene la direccion : %x\n", i, &a[i]);
    }
    for(int i = 0; i < 11; i++ ){
        b[i] = 1000 + i ;
        printf("El elemento b[%d] tiene el valor guardado de : %d\n", i, b[i]);
    }
    return 0; 
}
