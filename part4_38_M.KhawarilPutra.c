#include <stdio.h>

int main(){

    int n, i, nilai;

    printf("Masukkan Nilai n : ");
    scanf("%d", &n);
    
    for ( i = 1; i <= n; i++)
    {
        printf("Masukkan Nilai ke-%d : ", i);
        scanf("%d", &nilai);
    }
    
    
return 0;

}