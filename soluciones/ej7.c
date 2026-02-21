
#include <stdio.h>
int main(){
    // Resolver ejercicio 7
    return 0;
}


// este ejercicio nos pide que sin ejecutar justifiquemos cual direccion es mayor, si: &m[0][3] o &m[1][0]
// la respuesta es &m[1][0]
//demostracion:
// usando la formula anterior podriamos decir que:
//para &m[0][3]:
//(0 * 4 + 3) = 3
//base + 3 * 4= base + 12
//para &m[1][0]:
//(1 * 4 + 0) = 4
//base + 4 * 4= base + 16
// por lo que queda demostrado que &m[1][0] > &m[0][3]
