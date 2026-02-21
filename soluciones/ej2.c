//Sin ejecutar determina cuál dirección es mayor:
//&a[4] o &a[5]
//Justifica numéricamente y luego verifica ejecutando.
//La dirección de memoria del elemento a[5] es mayor que la del elemento a[4] esto es debido a que las direcciones de memoria 
//se llenan de forma asendente en la memoria RAM, es decir, si la ram tuviera espacios de 0,1,2 no se puede llenar el espacio 2 
//sin antes haber llenado 0 y 1 por que asi se llenan los arreglos en C y justamente el ciclo for hace que primero se le designe 
//un espacio de memoria al a[4] antes que 
//al a[5], pero en el valor hexadecimal que posee a[5] esta encima del de a[4] y justamente es por la cantidad de bytes que se le 
//designan al tipo de variable, suponiendo que es un Entero (Int), va de 4 en 4 bytes. Esto se comprueba con correr el programa 1, mostrando la diferencia de 
//que al elemento a[5] esta 4 bytes encima del a[4], pero es necesario recalcar que no necesariamente es siempre asi, es asi debido C asi
//funciona y que el código tiene una estructura que hace que asi sean las cosas siempre, pero se puede modificar para que el llenado sea diferente 
//y por consiguiente la dirección del elemento a[5] puede ser menor que el del elemento a[4], pero de manera natural, al usar C y usar ciclos
//y arreglos de manera normal, convergera a ser de esta manera, amenos que explicitamente el codigo este diseñado para que no sean asi
//*********NOTA**********
//Para comprobar, basta con compilar el Ejercicio 1, por eso es que no se va a añadir nada en este caso, pero se comprueba en el reporte 
//en donde se hace justamente uso de este codigo implicito
