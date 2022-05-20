/*Nama File 	: IsiMatrik.c*/
/*Deskripsi 	: Mengisikan nilai pada elemen-elemen matrik yang memiliki ordo sama ( M x N ) pada layar*/
/*Pembuat   	: Mulya Irwansyah - 24060121140110*/
/*Tgl Pembuatan	: Jumat, 20 05 2022 02:30 WIB*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int N,O,i,j;

    //Algoritma
    printf("Masukkan baris N: ");
    scanf("%d",&N);
    printf("Masukkan baris O: ");
    scanf("%d",&O);
    if(N==O && N>0 && O>0){
        for(i=1;i<=N;i++){
            for(j=1;j<=O;j++){
                if(i==j){
                    printf("1 ");
                }
                else if (j>i){
                    printf("0 ");
                }
                else{
                    printf("2 ");
                }
            }
            printf("\n");
        }
    }
    else{
        printf("Inputan tidak valid");
    }
    return 0;
}
