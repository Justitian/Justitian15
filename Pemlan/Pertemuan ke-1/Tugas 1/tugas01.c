#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
	char nama[20];
	char ttl [20];
	char npm [20];
	char jurusan[20];
	char kelas[20];
	char status[20];
	char doswal[20];
	char ipk[20];
	
	char x='y';
	
	
	printf("Masukkan Nama Anda       :");
	gets(nama);
	fflush(stdin);
	
	printf("Masukkan TTL Anda        :");
	gets(ttl);
	fflush(stdin);
	
	printf("Masukkan NPM Anda        :");
	gets(npm);
	fflush(stdin);
	
	printf("Masukkan Jurusan Anda    :");
	gets(jurusan);
	fflush(stdin);
	
	printf("Masukkan Kelas Anda      :");
	gets(kelas);
	fflush(stdin);
	
	printf("Masukkan Status Anda     :");
	gets(status);
	fflush(stdin);
	
	printf("Masukkan Dosen Wali Anda :");
	gets(doswal);
	fflush(stdin);
	
	printf("Masukkan IPK Anda        :");
	gets(ipk);
	fflush(stdin);
	
    
    system("cls");
    printf("==========================================");
    printf("\nData Diri Mahasiswa Fakultas Ilmu Komputer");
    printf("\n==========================================");
    printf("\nMasukkan Nama Anda       : %s", nama);
    printf("\nMasukkan NPM Anda        : %s", npm);
    printf("\nMasukkan Jurusan Anda    : %s", jurusan);
    printf("\nMasukkan Kelas Anda      : %s", kelas);
    printf("\nMasukkan Status Anda     : %s", status);
    printf("\nMasukkan Dosen Wali Anda : %s", doswal);
    printf("\nMasukkan IPK Anda        : %s", ipk);
    
return 0;
    
}
