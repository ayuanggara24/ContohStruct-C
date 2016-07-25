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
 	printf("NIP : ");
 	scanf ("%d", &dosen[b].nip);
 	printf("Nama : ");
 	scanf ("%s", &dosen[b].nama);
 	printf("Matkul : ");
 	scanf("%s", &dosen[b].matkul);
 }
 printf("\n%d Data Dosen Telah Dimasukkan", b);
 printf("\nNOMOR\t NIP\t Nama\t MATKUL\n");

 for (c=0;c<b;c++)

 {
 	printf("\n %d\t %d\t %s\t %s\t\n", dosen[c].nomor, dosen[c].nip, dosen[c].nama, dosen[c].matkul); 
 }

 system("pause");

