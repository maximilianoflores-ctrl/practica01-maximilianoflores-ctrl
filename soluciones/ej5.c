
#include <stdio.h>
int main(){
    // Resolver ejercicio 5
    return 0;
}

// lo mismo que el anterior
// el ejercicio dice que un estudiante afirma: si a[0]=1000 => a[10]=1010
// esto es incorrecto ya que el arreglo es de int por lo que el sizeof(int)= 4 bytes
//por lo tanto &a[10]= 1000+10*4
//&a[10]= 1000+40
//&a[10]= 1040 bytes
// 1040 bytes /= 1010 bytes
// enotnces es incorrecto lo que el estudiante afirma.

