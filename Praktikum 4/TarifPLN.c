/*Nama File 	: TarifPLN.c*/
/*Deskripsi 	: Menghitung dan menunjukan tarif PLN*/
/*Pembuat   	: Mulya Irwansyah - 24060121140110*/
/*Tgl Pembuatan	: Jumat, 18 03 2022 02:30 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int g,jd,tarif,total;

    //Algoritma
    printf("Program Hitung Tarif PLN\n");
    printf("Masukan golongan tarif (1 - 2) : ");
    scanf("%d", &g);
    printf("Masukan jumlah pemakaian daya listrik /kWH : ");
    scanf("%d", &jd);
    if (g == 1){
        if (jd <= 100){
            total = 100000;
            printf("%d", total);
        }
        else if (jd < 1000){
            total = jd * 1000;
            printf("%d", total);
        }
        else{
            total = (jd * 1000) + (0.1 * (jd * 1000));
            printf("%d", total);
        }
    }
    else{
        if (jd <= 100){
            total = 200000;
            printf("%d", total);
        }
        else if (jd < 1000){
            total = jd * 2000;
            printf("%d", total);
        }
        else{
            total = (jd * 2000) + (0.1 * (jd * 2000));
            printf("%d", total);
    }
    return 0;
    }
}
