#include <stdio.h>

int main(){

    int a, b;
    float c;

    printf("Masukkan Nilai a : ");
    scanf("%d", &a);

    printf("Masukkan Nilai b : ");
    scanf("%d", &b);

    c = (float) a / (float) b;

    printf("Hasil dari a / b : %.2f", c);

    return 0;

}