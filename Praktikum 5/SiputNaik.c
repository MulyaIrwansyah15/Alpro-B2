/*Nama File 	: SiputNaik.c*/
/*Deskripsi 	: Menentukan berapa hari waktu yang dibutuhkan siput untuk mencapai ketinggian N meter*/
/*Pembuat   	: Mulya Irwansyah - 24060121140110*/
/*Tgl Pembuatan	: Jumat, 25 03 2022 02:00 WIB*/

#include <stdio.h>

int main (){

    //Kamus
    float N;
    float tinggi;
    int h;

    //Algoritma
    printf("Program Siput Naik \n");
    printf("Masukkan kedalaman lubang : ");
    scanf("%f", &N);

    if (N <= 0){
        printf("Kedalaman lubang harus positif");
    }

    else{
        h = 0;
        tinggi = 0;
        while (tinggi >= 0 && tinggi < N ){
            tinggi = tinggi + 0.3;
            if (tinggi < N){
                tinggi = tinggi - 0.1;
            }
            h = h + 1;
        }
        printf("Waktu yang dibutuhkan oleh siput adalah %d hari", h);
    }
    return 0;
}



