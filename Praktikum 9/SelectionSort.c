/*Nama File 	: SelectionSort.c*/
/*Deskripsi 	: Membuat suatu program dengan mengurutkan integer menggunakan Selection Sort*/
/*Pembuat   	: Mulya Irwansyah - 24060121140110*/
/*Tgl Pembuatan	: Minggu, 08 05 2022 08:30 WIB*/

#include<stdio.h>

int SelectionSort(int arr[], int n){
    int i, j, posisi, swap;
    for(i = 0; i < (n-1); i++){
        posisi = i;
        for (j = i + 1; j < n; j++){
            if(arr[posisi] > arr[j]){
                posisi = j;
            }
        }
        if(posisi != i){
          swap = arr[i];
          arr[i] = arr[posisi];
          arr[posisi] = swap;
        }
    }
}

//Program Utama
int main()
{
    //Kamus
    int T[100], N, i;

    //Algoritma
    printf("Selection Sort \n");
    printf("Masukkan banyak elemen : ");
    scanf("%d", &N);
    printf("Masukkan nilai : \n");
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    //Memanggil Sub Program
    SelectionSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}
