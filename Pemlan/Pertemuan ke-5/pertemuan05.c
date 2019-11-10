#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main (void)
{
	
	
	 int k;
	 struct mhs{ 
	 char nama[20];
	 int nim[10][15];
	 }dt[5];
	 
	 		 printf(">>>>>> MENGHITUNG IP MAHASISWA <<<<<<\n\n");
	  		 for(k=0;k<1;k++)
	
           
            
           	printf("Nama mahasiswa = "); scanf("%s",&dt[k].nama);
	        printf("Npm = "); scanf("%i",&dt[k].nim);
            
			
            int i,jumlah_mk,sks,jumlah_sks,A,B,C,D,E;
            char n;
            float nilai=0,ipk;
            i=1;
            jumlah_sks=0;
            printf ("Jumlah Mata Kuliah = ");
            scanf ("%d",&jumlah_mk);
            do
           
            {
            	
            
            	
            	
                        printf ("\nNilai Mata Kuliah Ke-%d = ",i);
                        scanf ("%c%c",&n,&n);
                        printf ("Jumlah SKS = ");
                        scanf ("%d",&sks);
                        switch (n)
                        {
                                    case 'A':
                                                A=4;
                                                n=A*sks;
                                                break;
                                    case 'B':
                                                B=3;
                                                n=B*sks;
                                                break;
                                    case 'C':
                                                C=2;
                                                n=C*sks;
                                                break;
                                    case 'D':
                                                D=1;
                                                n=D*sks;
                                                break;
                                    case 'E':
                                                E=0;
                                                n=E*sks;
                                                break;
                        }
                        nilai=nilai+n;
                        jumlah_sks=jumlah_sks+sks;
                        i++;
            }
            while (i<=jumlah_mk);
            printf ("__________________________\n");
            ipk=nilai/jumlah_sks;
            printf ("\nJumlah Nilai = %g",nilai);
            printf ("\nJumlah SKS = %d",jumlah_sks);
            printf ("\nIPK = %g",ipk);
            
            return 0;
            getch();
}
