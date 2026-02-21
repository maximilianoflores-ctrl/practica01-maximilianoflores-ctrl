
#include <stdio.h>
int main(){
 int m[2][4];
    for(int i = 0; i<2; i++){
        for(int j = 0; j<4; j++){
            printf("&m[%d][%d] = %p\n", i, j, (*void)&m[i][j]);
        }
    }
    return 0;
}


//1. al imprimirlos sale la estructuria m[0][0]
//                                      m[0][1]
//                                      m[0][2]
//                                      m[0][3]
//                                      m[1][0]
//                                      m[1][1]
//2. con el dato del anterior punto puedo decir que el almacenamiento es por filas
//3. &m[i][j] = base + (i * 4 + j) * sizeof(int)
