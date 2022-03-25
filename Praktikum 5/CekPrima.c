/*Nama File 	: CekPrima.c*/
/*Deskripsi 	: Mengetahui sebuah bilangan integer sembarang N (N>0) yang termasuk bilangan prima atau bukan*/
/*Pembuat   	: Mulya Irwansyah - 24060121140110*/
/*Tgl Pembuatan	: Jumat, 25 03 2022 02:00 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Kamus
	int N, i, P;
	P = 0;

    //Algoritma
	printf("Program Mengecek Bilangan Prima \n");
	printf("Masukan Bilangan Integer : ");
	scanf("%d", &N);

	if ( N <= 0) {
        printf("Bilangan Harus Positif");
	}
	else {
        for (i = 2; i < N; i++) {
            if (N % i == 0 ) {
                P = 1;
                break;
            }
        }
        if (P == 1) {
            printf("%d Bukan Bilangan prima", N);
        }
        else {
            printf("%d Bilangan prima", N);
        }
	}
	return 0;
}
