#include <stdio.h>
#include <conio.h>


int main(){
        int n;
        int angka[20];
        
	//meminta banyaknya angka
	printf("Masukkan banyaknya bilangan yang diinginkan : ");
	scanf("%d", &n);
	printf("\n");
	
	//meminta inputan angka
	for(int i=0; i<n; i++){
		printf("Masukkan angka ke %d 	: ", i+1);
		scanf("%d", &angka[i]); 
	}
	printf("\n");
	//mencetak angka
	for(int i=0; i<n; i++){
		printf("Angka ke %d		: %d \n", i+1, angka[i]);
	}
	
     return 0;   
}
