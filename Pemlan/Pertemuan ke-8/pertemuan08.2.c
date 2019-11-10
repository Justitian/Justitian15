#include <stdio.h> 
#include <stdlib.h> 
main(){ 
    int tabInt[10]={1,2,3,4,5,6,7,8,9,0}; 
    int ketemu; 
    int cariData; 
    int i; 
    printf("Masukkan data yang dicari = "); 
    scanf("%d",&cariData); 
    i=0; 
    ketemu=0; 
    while (i<10 && ketemu!=1){ 
        if (tabInt[i]==cariData){ 
        ketemu=1; 
        }else{ 
            i++; 
        } 
    } 
    if(ketemu==1){ 
        printf("Data %d terdapat pada kumpulan data\n",cariData ); 
    }else{ 
        printf("Data %d tidak terdapat pada kumpulan data\n",cariData ); 
    } 
}
