/*Nama File 	: KelBil.c*/
/*Deskripsi 	: Menghitung dan menampilkan kelipatan terkecil jika diberikan array sembarang*/
/*Pembuat   	: Mulya Irwansyah - 24060121140110*/
/*Tgl Pembuatan	: Jumat, 20 05 2022 02:30 WIB*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int i, N,j,k,Klptn;

    //Algoritma
    printf("Masukkan banyaknya data: ");
    scanf("%d",&N);
    Klptn = 1;
    if(N>0){
        int T[N];
        for(i=1;i<=N;i++){
            printf("Masukkan Bilangan %d  (urut dari terkecil ke terbesar)  :  ",i);
            scanf("%d",&T[i]);
        }
        for(j=1;j<=N;j++){
            if(T[j]%Klptn==0){
                Klptn = T[j];
            }
            else{
                Klptn = Klptn*T[j];
            }
        }
        printf("Kelipatan terkecilnya adalah %d",Klptn);
    }else{
        printf("Masukan tidak tepat");
    }
    return 0;
}
