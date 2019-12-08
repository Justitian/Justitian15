#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int k, jml_input, x, pil, no_resi, berat_brg, total_hrg, jns_pengiriman, zip_code;
    char  nama_penerima, alm_penerima, nama_pengirim, alm_pengirim;
    
    struct{
 		char nama_penerima, alm_penerima, nama_pengirim, alm_pengirim;
		int no_resi, berat_brg, total_hrg, jns_pengiriman, zip_code;
 	}dt[5];
    
    awal:
    printf("| Informatics Express |\n");
    printf("Menu: \n");
    printf("1. Input Data \n");
    printf("2. Show Data \n");
    printf("3. Edit Data \n");
    printf("4. Search Data \n");
    printf("5. Sort Data \n");
    printf("6. Check ZIP Code \n");
    printf("Choose: ");
    scanf("%d",&pil);
    switch(pil)
    {
    case 1:
    	printf("Jumlah Data yang ingin di input: ");
		scanf("%d", &jml_input);
		
	for(k=0;k<jml_input;k++)
        printf ("Input Data\n");
		printf ("Masukan Nama Pengirim: ");
		scanf ("%s", &dt[k].nama_pengirim);
		printf ("Masukan Alamat Pengirim: ");
		scanf ("%s", &dt[k].alm_pengirim);
		printf ("Masukan Nama Penerima: ");
		scanf ("%s", &dt[k].nama_penerima);
		printf ("Masukan Alamat Penerima: ");
		scanf ("%s", &dt[k].alm_penerima);
		printf ("Masukan Zip Code Penerima: ");
		scanf ("%d", &dt[k].zip_code);
			
		printf("\n");
		printf("1. Fast\n");
    	printf("2. Flash\n");
		printf ("Masukan Jenis Pengiriman: ");
		scanf ("%d", &dt[k].jns_pengiriman);
		printf ("Masukan Berat Barang: ");
		scanf ("%d", &dt[k].berat_brg);
			
		printf("\n");
		printf ("Untuk menentukan no resi, ikuti ketentuan berikut: \n");
		printf ("Masukkan tanggal saat ini + Zip Code \n");
		printf ("Contoh: 201905011234 \n");
			
		printf("\n");
		printf ("Masukan No Resi: ");
		scanf ("%s", &dt[k].no_resi);
			
		dt[k].total_hrg = dt[k].jns_pengiriman*3000 + dt[k].berat_brg*6000 + (dt[k].zip_code-7750)*2000;
		
		printf ("Total Harga: %d", dt[k].total_hrg);
			
		printf ("\n");
		printf ("\n");
		printf ("Apakah Anda Ingin Kembali ke Menu? (y/n)");
		scanf ("%s", &x);
		if (x=='y') {goto awal;} else {goto akhir;}
		break;
	
		
    }
    
    akhir:
    return(0);
}

