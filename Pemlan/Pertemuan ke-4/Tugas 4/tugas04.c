#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


	struct tgl_lhr {
		int tgl;
		int bln;
		int thn;
	};
	struct alamat {
		char jln[40];
		char kota[20];
		char prov[20];
	};
	struct rekening {
		char norek[12];
		int saldo;
		char nama[40];
		char bank[10];
		struct tgl_lhr tgl_lhr;
		int umur;
		struct alamat alamat;
	};
	
int main(int argc, char *argv[]) {
	int index=0;
	int skrg=2019;
	int i=0;
	int j;
	int input;
	char convert[128];
	int loop=1;
	int inp_case;
	int total=0;
	int in_serbgn;
	char ch_serbgn[20];
	struct rekening rek[3];
	
	
	while(loop==1){
	printf("||========================================================================||\n");
	printf("||                              DATA NASABAH                              ||\n");
	printf("||========================================================================||\n");
	printf("|| 1. MEMASUKKAN DATA NASABAH                                             ||\n");
	printf("|| 2. MENAMPILKAN SEMUA DATA NASABAH                                      ||\n");
	printf("|| 3. MENAMPILKAN AKUMULASI SALDO TOTAL SEMUA NASABAH                     ||\n");
	printf("|| 4. MENAMPILKAN DATA NASABAH BERDASARKAN NAMA                           ||\n");
	printf("|| 5. MENAMPILKAN DATA NASABAH BERDASARKAN NOMER REKENING                 ||\n");
	printf("|| 6. MENAMPILKAN DATA NASABAH BERDASARKAN UMUR                           ||\n");
	printf("|| 7. MENAMPILKAN DATA NASABAH BERDASARKAN KOTA                           ||\n");
	printf("|| 8. MENAMPILKAN DATA NASABAH BERDASARKAN PROVINSI                       ||\n");
	printf("|| 9. KELUAR DARI MENU                                                    ||\n");
	printf("||========================================================================||\n");
	printf("Masukkan angka sesuai menu diatas: ");
	scanf("%d",&inp_case);
		
	system("cls");	
	switch(inp_case){
		case 1:
			{
				printf("Masukkan Nama Anda: ");
				scanf("%s",&rek[i].nama);
				system("cls");
				printf("Pilih Bank yang Anda inginkan");
				printf("\n1. BRA (Bank Rakyat Asgard)");
				printf("\n2. BH (Bank Hati)");
				printf("\n3. BO (Bank Onigiri)");
				printf("\nMasukkan Bank yang Anda inginkan berdasarkan angka di atas: ");
				scanf("%d",&input);
				
				switch(input){
					case 1:
						strcpy(rek[i].bank,"BRA (Bank Rakyat Asgard)");
						strcpy(rek[i].norek,"001");
						system("cls");
						break;
					case 2:
						strcpy(rek[i].bank,"BH (Bank Hati)");
						strcpy(rek[i].norek,"002");
						system("cls");
						break;
					case 3:
						strcpy(rek[i].bank,"BO (Bank Onigiri)");
						strcpy(rek[i].norek,"003");
						system("cls");
						break;
					default:
						printf("Input Anda salah!");
						system("cls");
						break;
				}
					printf("Masukkan tanggal lahir Anda \n");
					printf("Tanggal\t: ");
					scanf("%d",&rek[i].tgl_lhr.tgl);	
					printf("Bulan\t: ");
					scanf("%d",&rek[i].tgl_lhr.bln);
					printf("Tahun\t: ");
					scanf("%d",&rek[i].tgl_lhr.thn);
					fflush(stdin);
					system("cls");
					
					rek[i].umur = skrg - rek[i].tgl_lhr.thn;
					
						printf("Masukkan Alamat Rumah Anda\n");
						printf("Jalan\t\t: ");
						scanf("%[^\n]",&rek[i].alamat.jln);	
						fflush(stdin);
						printf("Kota\t\t: ");
						scanf("%[^\n]",&rek[i].alamat.kota);
						fflush(stdin);
						printf("Provinsi\t: ");
						scanf("%[^\n]",&rek[i].alamat.prov);
						fflush(stdin);
						system("cls");
						
							strcat(rek[i].norek,itoa(rand()%512+128,convert,10));
							if(rek[i].tgl_lhr.tgl<10){
							strcat(rek[i].norek,"0");
							}
							strcat(rek[i].norek,itoa(rek[i].tgl_lhr.tgl,convert,10));	
							if(rek[i].tgl_lhr.bln<10){
							strcat(rek[i].norek,"0");
							}
							strcat(rek[i].norek,itoa(rek[i].tgl_lhr.bln,convert,10));
							if((rek[i].tgl_lhr.thn%100)<10){
							strcat(rek[i].norek,"0");
							}
							strcat(rek[i].norek,itoa((rek[i].tgl_lhr.thn)%10,convert,10));
							printf("Nomer Rekening Anda\t: %s\n",rek[i].norek);
							printf("Saldo awal untuk Nasabah baru adalah Rp 200.000,00");
							fflush(stdin);
				
				i++;
			}
			break;
		case 2:
		{
			printf("Data semua Nasabah yang terdaftar\n");
			for(j=0;j<i;j++){
				printf("Nama		: %s\n",rek[j].nama);
				printf("Nama Bank	: %s\n",rek[j].bank);
				printf("No Rek		: %s\n",rek[j].norek);
				printf("Umur		: %d\n",rek[j].umur);
				printf("Tgl Lahir	: %d-%d-%d\n",rek[j].tgl_lhr.tgl,rek[j].tgl_lhr.bln,rek[j].tgl_lhr.thn);
				printf("Alamat		: Jl.%s, Kota %s, Provinsi %s\n",rek[j].alamat.jln,rek[j].alamat.kota,rek[j].alamat.prov);
				printf("Saldo 		: 200000\n");
				printf("\n\n");
				}	
		}
			break;
			
		case 3:	
		{
			for(j=0;j<i;j++){
				total = 200000 + 200000;
			}
			printf("Total Saldo 	: %d", total);
		}
		
			break;
			
		case 4:			
		{
			printf("Masukkan Nama yang ingin dicari: ");
			scanf("%s",&ch_serbgn);
			fflush(stdin);
			for(j=0;j<i;j++){
				if(strcmp(rek[j].nama,ch_serbgn)==0){
				printf("Nama		: %s\n", rek[j].nama);
				printf("Nama Bank	: %s\n", rek[j].bank);
				printf("No Rek		: %s\n", rek[j].norek);
				printf("Umur		: %d\n", rek[j].umur);
				printf("Tgl Lahir	: %d-%d-%d\n", rek[j].tgl_lhr.tgl,rek[j].tgl_lhr.bln,rek[j].tgl_lhr.thn);
				printf("Alamat		: Jl.%s, Kota %s, Provinsi %s\n",rek[j].alamat.jln,rek[j].alamat.kota,rek[j].alamat.prov);
				printf("Saldo 		: 200000\n");
				printf("\n\n");
				}
				}
		}
			break;
		
		case 5:
		{
			printf("Masukkan Nomer Rekening yang ingin dicari: ");
			scanf("%s",&ch_serbgn);
			fflush(stdin);
			for(j=0;j<i;j++){
				if(strcmp(rek[j].norek,ch_serbgn)==0){
				printf("Nama		: %s\n", rek[j].nama);
				printf("Nama Bank	: %s\n", rek[j].bank);
				printf("No Rek		: %s\n", rek[j].norek);
				printf("Umur		: %d\n", rek[j].umur);
				printf("Tgl Lahir	: %d-%d-%d\n", rek[j].tgl_lhr.tgl,rek[j].tgl_lhr.bln,rek[j].tgl_lhr.thn);
				printf("Alamat		: Jl.%s, Kota %s, Provinsi %s\n",rek[j].alamat.jln,rek[j].alamat.kota,rek[j].alamat.prov);
				printf("Saldo 		: 200000\n");
				printf("\n\n");
				}
				}
		}	
			break;	
		
		case 6:		
		{
			printf("Masukkan range umur: ");
			scanf("%d",&in_serbgn);
			for(j=0;j<i;j++){
				if(rek[j].umur<in_serbgn){
					printf("Nama %s umur kurang dari %d\n",rek[j].nama,in_serbgn);
				}else {
					printf("Nama %s umur lebih dari %d\n",rek[j].nama,in_serbgn);
				}
				}	
		}
			break;
		case 7:		
		{
			printf("Masukkan kota yang ingin anda cari: ");
			scanf("%s",&ch_serbgn);
			fflush(stdin);
			for(j=0;j<i;j++){
				if(strcmp(rek[j].alamat.kota,ch_serbgn)==0){
				printf("Nama		: %s\n", rek[j].nama);
				printf("Nama Bank	: %s\n", rek[j].bank);
				printf("No Rek		: %s\n", rek[j].norek);
				printf("Umur		: %d\n", rek[j].umur);
				printf("Tgl Lahir	: %d-%d-%d\n", rek[j].tgl_lhr.tgl,rek[j].tgl_lhr.bln,rek[j].tgl_lhr.thn);
				printf("Alamat		: Jl.%s, Kota %s, Provinsi %s\n",rek[j].alamat.jln,rek[j].alamat.kota,rek[j].alamat.prov);
				printf("Saldo 		: 200000\n");
				printf("\n\n");
				}
				}
		}
			break;
		case 8:
		{
			printf("Masukkan kota yang ingin anda cari: ");
			scanf("%s",&ch_serbgn);
			fflush(stdin);
			for(j=0;j<i;j++){
				if(strcmp(rek[j].alamat.prov,ch_serbgn)==0){
				printf("Nama		: %s\n", rek[j].nama);
				printf("Nama Bank	: %s\n", rek[j].bank);
				printf("No Rek		: %s\n", rek[j].norek);
				printf("Umur		: %d\n", rek[j].umur);
				printf("Tgl Lahir	: %d-%d-%d\n", rek[j].tgl_lhr.tgl,rek[j].tgl_lhr.bln,rek[j].tgl_lhr.thn);
				printf("Alamat		: Jl.%s, Kota %s, Provinsi %s\n",rek[j].alamat.jln,rek[j].alamat.kota,rek[j].alamat.prov);
				printf("Saldo 		: 200000\n");
				printf("\n\n");
				}
				}
		}
			break;
		case 9:
			exit(0);
			break;
			
		default:
			printf("Input Anda salah!");
			break;
		}	
		
		printf("\nKembali ke Menu Utama? (1. Ya/2. Tidak) ");
		scanf("%d",&loop);

		system("cls");
	}
	
	return 0;
}
