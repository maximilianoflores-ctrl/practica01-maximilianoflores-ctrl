
#include <stdio.h>
int main(){
    int a[3];
    for(int i = 0; i<3; i++){
        printf( "&a[%d] = %p\n", i, (*void)&a[i]);
    }
    int b[3];
    for(int j = 0; j<3; j++){
        printf("&b[%d] = %p\n, j, (*void)&b[j]);
            }
    int c[3];
        for(int k = 0; k<3; k++){
            printf("&c[%d] = %p\n, k, (*void)&c[k])
                }         
    return 0;
}
