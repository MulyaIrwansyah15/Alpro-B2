/*Nama File 	: CekSempurna.c*/
/*Deskripsi 	: Mengetahui sebuah bilangan integer sembarang N (N>0) yang termasuk bilangan sempurna atau bukan*/
/*Pembuat   	: Mulya Irwansyah - 24060121140110*/
/*Tgl Pembuatan	: Jumat, 25 03 2022 02:00 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Kamus
    int N,i,b;
    b = 0;

    //Algoritma
	printf("Program Mengecek Bilangan Sempurna \n");
    printf("Masukkan Bilangan Integer :");
    scanf("%d", &N);

    if ( N <= 0) {
        printf("Masukkan bilangan positf");
    }
    else {
        for (i = 1; i < N; i++) {
            if (N % i == 0){
                b = b + i;
            }
        }
        if (N == b) {
            printf("%d Bilangan sempurna", N);
        }
        else {
            printf("%d Bukan bilangan sempurna", N);
        }
    }
    return 0;
}
