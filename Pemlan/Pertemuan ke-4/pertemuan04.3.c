#include <stdio.h>
#include <stdlib.h>
 
int main(void)
 {
 int k;
 
struct mhs{
 char nama[20];
 int nim[10];
 float ipk;
 }dt[5];
 
printf("Masukan Data Mahasiswa \n\n");
 
for(k=0;k<5;k++)
 {
 printf("No. %i \n",k+1);
 printf("Nama = "); scanf("%s",&dt[k].nama);
 printf("Nim = "); scanf("%s",&dt[k].nim);
 printf("IPK = "); scanf("%f",&dt[k].ipk);
 }
 printf("\n");
 
printf("|No | Nama | NIM | IPK | \n");
 for(k=0;k<5;k++)
 {
 printf("|%i | %s | %s | %.2f |\n",k+1,dt[k].nama,dt[k].nim,dt[k].ipk);
 
 if((dt[k].ipk)>=3.00)
 printf("(Mahasiswa bernama %s memiliki ipk >=3.00) \n", &dt[k].nama);
 if((dt[k].ipk)<=2.99)
 printf("(mahasiswa bernama %s memiliki ipk <=2.99) \n", &dt[k].nama);
 }

 
system("pause");
 return(0);
 }
