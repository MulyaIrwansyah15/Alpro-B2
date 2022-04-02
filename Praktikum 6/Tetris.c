/*Nama File 	: Tetris.c*/
/*Deskripsi 	: Menunjukan susunan karakter ‘*’ dari sebuah inputan integer N > 0 dari yang terkecil*/
/*Pembuat   	: Mulya Irwansyah - 24060121140110*/
/*Tgl Pembuatan	: Sabtu, 02 04 2022 17:00 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int i;
    int N;
    int c;

    //Algoritma
    printf("Program Tetris\n");
    printf("Masukan sebuah bilangan (N > 0) : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
         for(i = 1;i <= N;i++){
                for(c = 0;c < i;c++){
                    printf("*");
                }
                printf("\n");
        }
    }
    return 0;
}
