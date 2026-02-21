
#include <stdio.h>
int main(){
    // Resolver ejercicio 4
    return 0;
}


//como solamente nos pidio calcular lo pongo como comentario en esta parte de abajo
// Dice el ejercicio que &a[0]=5000 y a[3]=5012 y dice
//1. tamaño del tipo: 12 bytes / 3 elementos= 4 bytes por elemento
//2. Direcccion de a[5]: siguiendo el tamaño de cada elemento podemos decir que para el a[4]= 5012 bytes + 4 bytes= 5016 bytes & para el a[5]= 5016 bytes + 4 bytes= 5020 bytes
//3. Formula usada: &a[i] = &a[0] + i * sizeof(int)
