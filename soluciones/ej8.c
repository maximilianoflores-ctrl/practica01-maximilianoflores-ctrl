
#include <stdio.h>
int main(){
    // Resolver ejercicio 8
    return 0;
}

// el problema nos da estos datos: base=2000, sizeof(int)=4, m[1][2]= 2024
//nos piden el numero de columnas y el tamaño total
//Para el numero de columnas:
// 2024 = 2000 + (1 + columnas + 2) * 4
// 2024 - 2000 = 24
// (1 * columnas + 2) *4 = 24
// 1 * columnas + 2 = 6
// columnas = 4
// Para el tamaño total:
// int m[2][4]
// 2*4= 8
// 8*4 = 32 bytes
