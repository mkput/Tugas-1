#include <stdio.h>

int main(){

    int makanan = 1, minuman = 2;
    int order;

    printf("1. Makanan \n2. Minuman\n");
    printf("Pesanan Anda : ");
    scanf("%d", &order);

    if (order == makanan)
    {
        printf("Mie Goreng");
    }
    else if (order == minuman)
    {
        printf("Green Tea");
    }
    else {
        printf("Pesanan Anda Tidak Tersedia");
    }
    
    return 0;

}