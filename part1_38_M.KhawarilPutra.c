#include <stdio.h>

int main(){

    char nama[50];
    char prodi[50];

    printf("Masukkan Nama Lengkap : ");
    scanf("%[^\n]s", nama);

    printf("Masukkan Prodi : ");
    scanf(" %s", prodi);

    printf("Nama : %s", nama);
    printf("\n");
    printf("Dari Prodi : %s", prodi);

    return 0;

}