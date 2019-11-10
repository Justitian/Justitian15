#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){
	
	printf("----------ARRAY 3 DIMENSI----------\n");
	printf("| Menghitung Jarak Titik ke Titik |\n");
	printf("-----------------------------------\n");
	
	float arr[2][3][3]={{{1,3,5}, {2,4,6}, {3,6,9}} , {{2,3,5}, {3,5,7}, {5,7,11}}};
	
	int x, y, z;
	float jarak, jtitik;
	for (x=0; x<2; x++){
		jtitik = 0;
		printf("\njalur ke-%d:\n", x+1);
		
		for (y=0; y<3; y++){
			printf("\tTitik ke-%d: ", y+1);
			jarak= 0;
			
			for (z=0; z<3; z++){
				printf(" %.f", arr[x][y][z]);
				if (y < 2) {
					jarak= jarak + pow(arr[x][y+1][z]-arr[x][y][z],2);
				}
				
			}
			jtitik = jtitik + sqrt(jarak);
			printf("\n");
			
		}
		
		printf("\tJarak Antar Titik= %.2f\n", jtitik);
	}

	getch();
}

