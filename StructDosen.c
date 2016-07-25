#include <stdio.h>
 #include <stdlib.h>
 
 int main (void)
 {
 int a,b,c;
 struct data{
 int nomor;
 int nip;
 char nama[20];
 char matkul[15];
 };

struct data dosen[5];
printf("Masukkan Jumlah Data Dosen (Maks. 5 orang) : ");
 scanf ("%d", &a);

 for(b=0;b<a;b++)
 {
 	dosen[b].nomor=b+1;
 	printf("\n%d.\n", b+1);
 
 }