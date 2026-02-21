//Datos:
//base = 2000
//sizeof(int)=4
//m[1][2] = 2024
//Calcula:
//Solo almacena enteros, es decir, el incremento va de 4 en 4 bytes, la diferencia de bytes entre el ultimo elemento
//y el primero es de 24 bytes, 24/4 = 6 espacios, como el arreglo es bidimensional, no puede ser un m[6], por lo que debe 
//de ser m[2][3] o m[3][2], debido a que el ultimo elemento es m[1][2] eso implica que estamos hablando del caso m[2][3], 
//ya que empieza en 0 y terminas n-1, en este caso 2, es decir, posee 2 horizontales(filas) y 3 verticales(columnas).
//número de columnas: 3
//tamaño total: 6 espacios para almacenar enteros
