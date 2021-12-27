#include <stdio.h>
#include <string.h>
#include <windows.h>

void garis(int x) {
	int a;
	for(a = 0; a < x; a++) {
		printf("=");
	}
	printf("\n");
}

typedef struct{
char nama_barang[30];
int harga_barang;
}alat_tulis;

alat_tulis atk[10];

typedef struct{
char nama_barang[30];
int harga_barang;
}makanan_minuman;

makanan_minuman mm[10];

typedef struct{
char nama_barang[30];
int harga_barang;
}keperluan_rumah_tangga;

keperluan_rumah_tangga rt[10];

void belanja();
void list_harga();
void total_harga();
void keranjang();
void check_out();

int total=0;

void belanja()
{
    int i, j, jml, item;
    belanja:
    garis(25);
    printf("|     Toko Bahagia!\t|\n");
    garis(25);
    printf("\n");
    printf(" Mau belanja apa Anda hari ini?\n");
    printf("  (1) Alat tulis\n");
    printf("  (2) Makanan & minuman\n");
    printf("  (3) Keperluan rumah tangga\n");
    printf("  (4) Kembali\n\n");
    printf("  Masukkan pilihan: ");
    scanf("%d", &i);
    if(i==1)
    {
        printf("\n");
		printf("  ");
		garis(17);
		printf("  |  Alat tulis   |\n");
		printf("  ");
		garis(17);
		for(j=0; j<10; j++)
        {
            printf("   (%d) %s (Rp.%d)\n", j+1, atk[j].nama_barang, atk[j].harga_barang);
        }
        printf("\n");
        printf("   Masukkan jumlah item: ");
        scanf("%d", &jml);
        
        for(j=0; j<jml; j++)
        {
        	printf("   Pilih barang %d (1-10) ", j+1);
        	scanf("%d", &item);
        	total=total+atk[jml-1].harga_barang;
		}
		printf("\n   Pesanan Anda Tersimpan!\n\n");
		getchar();
        goto belanja;
    }
    
    if(i==2)
    {
        printf("\n");
		printf("  ");
		garis(26);
		printf("  |  Makanan dan Minuman   |\n");
		printf("  ");
		garis(26);
		for(j=0; j<10; j++)
        {
            printf("   (%d) %s (Rp.%d)\n", j+1, mm[j].nama_barang, mm[j].harga_barang);
        }
        printf("\n");
        printf("   Masukkan jumlah item: ");
        scanf("%d", &jml);
        
        for(j=0; j<jml; j++)
        {
        	printf("   Pilih barang %d (1-10) ", j+1);
        	scanf("%d", &item);
        	total=total+atk[jml-1].harga_barang;
		}
		printf("\n   Pesanan Anda Tersimpan!");
		getchar();
        goto belanja;
        
    }
    
    if(i==3)
    {
        printf("\n");
		printf("  ");
		garis(29);
		printf("  |  Keperluan Rumah Tangga   |\n");
		printf("  ");
		garis(29);
		for(j=0; j<10; j++)
        {
            printf("   (%d) %s (Rp.%d)\n", j+1, rt[j].nama_barang, rt[j].harga_barang);
        }
        printf("\n");
        printf("   Masukkan jumlah item: ");
        scanf("%d", &jml);
        
        for(j=0; j<jml; j++)
        {
        	printf("   Pilih barang %d (1-10) ", j+1);
        	scanf("%d", &item);
        	total=total+atk[jml-1].harga_barang;
		}
		printf("\n   Pesanan Anda Tersimpan!");
		getchar();
        goto belanja;
    }
    if(i==4)
    {
    	
	}
}

void list_harga()
{
	int i;
	
	printf("\n");
	garis(25);
	printf("|   List Harga Barang\t|\n");
	garis(25);
	printf("  Harga Alat Tulis\n");
	for (i=0; i<10; i++)
	{
		printf("  (%d) %s (Rp.%d)\n", i+1, atk[i].nama_barang, atk[i].harga_barang);
	}
	printf("\n");
	printf("  Harga Makanan dan Minuman\n");
	for (i=0; i<10; i++)
	{
		printf("  (%d) %s (Rp.%d)\n", i+1, mm[i].nama_barang, mm[i].harga_barang);
	}
	printf("\n");
	printf("  Harga Keperluan Rumah Tangga\n");
	for (i=0; i<10; i++)
	{
		printf("  (%d) %s (Rp.%d)\n", i+1, rt[i].nama_barang, rt[i].harga_barang);
	}
	getchar();
}

void total_harga()
{
	printf("\n  Total harga belanjaan anda Rp.%d\n", total);
	getchar();
}

void checkout()
{
	int uang, kembali;
	
	bayar:
	printf("\n");
	printf("  Total pesanan Anda adalah Rp.%d\n", total);
	printf("  Uang anda: Rp.");
	scanf("%d", &uang);
	if(uang<total)
	{
		printf("Maaf uang Anda tidak cukup!\n");
		getchar();
		goto bayar;
	}
	kembali=uang-total;
	printf("\n");
	printf("  Kembalian Anda sebesar Rp.%d\n\n", kembali);
	printf("============Terima Kasih============");
}

int main()
{
    int n;

    strcpy(atk[0].nama_barang, "pensil 2B");
    atk[0].harga_barang = 4000;
    strcpy(atk[1].nama_barang, "penghapus");
    atk[1].harga_barang = 3500;
    strcpy(atk[2].nama_barang, "buku tulis");
    atk[2].harga_barang = 5000;
    strcpy(atk[3].nama_barang, "penggaris 30 cm");
    atk[3].harga_barang = 3000;
    strcpy(atk[4].nama_barang, "pulpen");
    atk[4].harga_barang = 4000;
    strcpy(atk[5].nama_barang, "stipo");
    atk[5].harga_barang = 7000;
    strcpy(atk[6].nama_barang, "rautan");
    atk[6].harga_barang = 3000;
    strcpy(atk[7].nama_barang, "stabilo");
    atk[7].harga_barang = 9000;
    strcpy(atk[8].nama_barang, "sticky notes");
    atk[8].harga_barang = 4000;
    strcpy(atk[9].nama_barang, "paper clips");
    atk[9].harga_barang = 3000;
    
    strcpy(mm[0].nama_barang, "Cheetos");
    mm[0].harga_barang = 2100;
    strcpy(mm[1].nama_barang, "Lays");
    mm[1].harga_barang = 2300;
    strcpy(mm[2].nama_barang, "Doritos");
    mm[2].harga_barang = 2100;
    strcpy(mm[3].nama_barang, "Chitato");
    mm[3].harga_barang = 3000;
    strcpy(mm[4].nama_barang, "Pringles");
    mm[4].harga_barang = 4000;
    strcpy(mm[5].nama_barang, "Nuka Cola");
    mm[5].harga_barang = 5000;
    strcpy(mm[6].nama_barang, "Sprote");
    mm[6].harga_barang = 5000;
    strcpy(mm[7].nama_barang, "Pepso");
    mm[7].harga_barang = 4500;
    strcpy(mm[8].nama_barang, "funta");
    mm[8].harga_barang = 5000;
    strcpy(mm[9].nama_barang, "Teh Bundar");
    mm[9].harga_barang = 6000;
    
    strcpy(rt[0].nama_barang, "Detergen");
    rt[0].harga_barang = 30000;
    strcpy(rt[1].nama_barang, "Pel");
    rt[1].harga_barang = 25000;
    strcpy(rt[2].nama_barang, "Pengharum Ruangan");
    rt[2].harga_barang = 15000;
    strcpy(rt[3].nama_barang, "Sabu");
    rt[3].harga_barang = 20000;
    strcpy(rt[4].nama_barang, "Sabun");
    rt[4].harga_barang = 5000;
    strcpy(rt[5].nama_barang, "Kemoceng");
    rt[5].harga_barang = 12000;
    strcpy(rt[6].nama_barang, "Handuk");
    rt[6].harga_barang = 9000;
    strcpy(rt[7].nama_barang, "Hand Sanitizer");
    rt[7].harga_barang = 10000;
    strcpy(rt[8].nama_barang, "Taplak Meja");
    rt[8].harga_barang = 12000;
    strcpy(rt[9].nama_barang, "Masker");
    rt[9].harga_barang = 1000;

	menu:
	garis(41);
    printf("|    Selamat datang di Toko Bahagia!\t|\n");
    garis(41);
    printf("\n");
    printf(" Silahkan pilih menu dibawah ini:\n");
    printf("  (1) Belanja\n");
    printf("  (2) List Harga Barang\n");
    printf("  (3) Total harga belanjaan\n");
    printf("  (4) Check out\n\n");
    printf("  Masukkan pilihan: ");
    scanf("%d", &n);

    switch(n){
        case 1:
            belanja();
            goto menu;
        case 2:
        	list_harga();
        	goto menu;
        case 3:
        	total_harga();
        	goto menu;
        case 4:
        	checkout();
        	break;
    }
}
