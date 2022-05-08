/*Nama File 	: InsertionSort.c*/
/*Deskripsi 	: Membuat suatu program dengan mengurutkan integer menggunakan Insertion Sort*/
/*Pembuat   	: Mulya Irwansyah - 24060121140110*/
/*Tgl Pembuatan	: Minggu, 08 05 2022 08:30 WIB*/

#include<stdio.h>

//Sub Program
void InsertionSort(int T[], int N)
{
    //Kamus Lokal
    int i, temp, j;

    //Algoritma
    for (i = 1; i < N; i++) {
        temp = T[i];
        j = i - 1;
        while (j >= 0 && T[j] > temp) {
            T[j + 1] = T[j];
            j-- ;
        }
        T[j + 1] = temp;
    }
}

//Program Utama
int main()
{
    //Kamus
    int T[100], N, i;

    //Algoritma
    printf("Insertion Sort \n");
    printf("Masukkan banyak elemen : ");
    scanf("%d", &N);
    printf("Masukkan nilai : \n");
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    //Memanggil Sub Program
    InsertionSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}
