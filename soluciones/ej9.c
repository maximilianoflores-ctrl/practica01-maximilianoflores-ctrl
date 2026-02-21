
#include <stdio.h>
int main(){
    int a[5] = {10, 20, 30, 40, 50};

    printf("&a[-1] = %p\n", (*void)&a[-1]);
    printf("&a[0] = %p\n", (*void)&a[0]);
    printf("&a[4] = %p\n", (*void)&a[4]);
    printf("&a[5] = %p\n", (*void)&a[5]);
    return 0;
}

// pregunta el pq compila sin errores:
// porque no verifica limites de arreglos en C pero es peligroso por que en si lo que contiene e basura entonces podria leer basura o podria marcar el famosisimo "SEGMENTATION FAULT"
// Y pregunta que que revela sobre la memoria y revela que los arreglos ebn C son memoria contigua sin proteccion
