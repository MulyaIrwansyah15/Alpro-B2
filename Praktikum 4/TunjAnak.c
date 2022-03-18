/*Nama File 	: TunjAnak.c*/
/*Deskripsi 	: Menghitung dan menampilkan besarnya tunjangan anak*/
/*Pembuat   	: Mulya Irwansyah - 24060121140110*/
/*Tgl Pembuatan	: Jumat, 18 03 2022 02:30 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int j,g,t;

    //Algoritma
    printf("Program Menghtiung Tunjangan Anak\n");
    printf("Masukan jumlah anak : ");
    scanf("%d", &j);
    printf("Masukan gaji pokok : ");
    scanf("%d", &g);

    switch(j){

    case 0:
        t = 0 * (0.1 * g);
        printf("%d", t);
        break;
    case 1:
        t = 1 * (0.1 * g);
        printf("%d", t);
        break;
    case 2:
        t = 2 * (0.1 * g);
        printf("%d", t);
        break;
    case 3:
        t = 3 * (0.1 * g);
        printf("%d", t);
        break;
    default:
        t = 3 * (0.1 * g);
        printf("%d", t);
    }
    return 0;

}
