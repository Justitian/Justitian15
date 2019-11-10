#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>



//Menggunakan fungsi Rekursif//

 
 int pangkat (int x,int y)
 {
 	if (y==0){
 		return 1 ;
	 }
	 else {
	 	return x * pangkat (x,y-1);
	 }
	 
}

	int main(int argc, char *argv[]) {
	int x,y;
	int hasil=1;
	int i=0;
	
	//Cara Rekursif
	printf("===========================================");
	printf("\n|| Sistem Pemograman Bilangan Berpangkat ||");
	printf("\n===========================================\n");
	printf("\n\nMasukan bilangan yang akan dipangkatkan :");
	scanf("%d",&x);
	printf("Masukan bilangan pangkatnya :");
	scanf("%d",&y);
	printf("Hasil dari bilangan berpangkat %d^%d dengan cara rekursif  :  %d \n",x,y,pangkat (x,y));
	
	//Cara interatif//
	for (i=1; i<=y; i++){
		hasil=hasil*x;
	}

	printf("Hasil dengan cara interatif : %d\n",hasil);
	
	

	getch;
	
}

