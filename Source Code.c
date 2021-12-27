#include <stdio.h>
#include <string.h>
#include <windows.h>

void lanjut()
{
    char c;
    printf(" \nIngin lanjut? (y/n): ");
    fflush(stdin); scanf("%c", &c);
    if(c=='n')
    {
        printf("Selesai, Terima Kasih!!!");
        exit(0);
    }
    else
        system("cls");
}

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
char kategori[5];
}produk;

produk pd[30];

typedef struct{
char nama_barang[30];
int jumlah_barang;
int harga_barang;
}keranjang;

keranjang kj[30];

//variabel global
int total=0;
int l=0, length=0;
int penanda=0;

void belanja()
{
    int i, j, k, jml, item;
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
		for(j=0; j<30; j++)
        {
            if(strcmp(pd[j].kategori, "atk")==0)
                printf("   (%d) %s (Rp.%d)\n", j+1 , pd[j].nama_barang, pd[j].harga_barang);
        }
        printf("\n");
        printf("   Masukkan kode item (1-10): ");
        scanf("%d", &item);
        strcpy(kj[l].nama_barang, pd[item-1].nama_barang);
        kj[l].harga_barang = pd[item-1].harga_barang;

        printf("   Masukkan jumlah barang: ", j+1);
        scanf("%d", &jml);
        kj[l].jumlah_barang = jml;
        l+=1;

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
		for(j=0; j<30; j++)
        {
            if(strcmp(pd[j].kategori, "mm")==0)
                printf("   (%d) %s (Rp.%d)\n", j-9 , pd[j].nama_barang, pd[j].harga_barang);
        }
        printf("\n");
        printf("   Masukkan kode item (1-10): ");
        scanf("%d", &item);
        strcpy(kj[l].nama_barang, pd[item+9].nama_barang);
        kj[l].harga_barang = pd[item+9].harga_barang;

        printf("   Masukkan jumlah barang: ", j+1);
        scanf("%d", &jml);
        kj[l].jumlah_barang = jml;
        l+=1;

		printf("\n   Pesanan Anda Tersimpan!\n\n");
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
		for(j=0; j<30; j++)
        {
            if(strcmp(pd[j].kategori, "rt")==0)
                printf("   (%d) %s (Rp.%d)\n", j-19 , pd[j].nama_barang, pd[j].harga_barang);
        }
        printf("\n");
        printf("   Masukkan kode item (1-10): ");
        scanf("%d", &item);
        strcpy(kj[l].nama_barang, pd[item+19].nama_barang);
        kj[l].harga_barang = pd[item+19].harga_barang;

        printf("   Masukkan jumlah barang: ", j+1);
        scanf("%d", &jml);
        kj[l].jumlah_barang = jml;
        l+=1;

		printf("\n   Pesanan Anda Tersimpan!\n\n");
		getchar();
        goto belanja;
    }
    if(i==4)
    {
        system("cls");
        main();
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

	if(penanda==0)
    {
        for (i=0; i<10; i++)
        {
            printf("  (%d) %s (Rp.%d)\n", i+1, pd[i].nama_barang, pd[i].harga_barang);
        }
        printf("\n");
        printf("  Harga Makanan dan Minuman\n");
        for (i=10; i<20; i++)
        {
            printf("  (%d) %s (Rp.%d)\n", i-9, pd[i].nama_barang, pd[i].harga_barang);
        }
        printf("\n");
        printf("  Harga Keperluan Rumah Tangga\n");
        for (i=20; i<30; i++)
        {
            printf("  (%d) %s (Rp.%d)\n", i-19, pd[i].nama_barang, pd[i].harga_barang);
        }
	}
	else
    {
        for (i=0; i<length; i++)
        {
            printf("  (%d) %s (Rp.%d)\n", i+1, pd[i].nama_barang, pd[i].harga_barang);
        }
    }
	getchar();
}

void search()
{
    int n, m;
    char cari[30];
    int flag = 0;

    printf("\n Pilih metode search yang anda inginkan:\n");
    printf("  1. Sequential Search\n");
    printf("  2. Binary Search\n");
    printf("  3. Jump Search\n");
    printf("  4. Interpolation Search\n");
    printf("  Masukkan pilihan:");
    scanf("%d", &n);

    if(n==1)
    {
        printf("\n Masukkan Nama Barang: "); fflush(stdin);
        gets(cari);

        for(n=0; n<length; n++)
        {
            if(strcmp(pd[n].nama_barang, cari)==0)
                {flag = 1; break;}
        }
        if(flag == 1)
        {
            system("cls");
            printf("\n Data ditemukan pada indeks ke-%d\n", n);
            printf("  Nama Barang: %s\n", pd[n].nama_barang);
            printf("  Harga Barang: %d\n", pd[n].harga_barang);
        }
        else
        {
            system("cls");
            printf("Data tidak ditemukan");
        }
    }
}

void sort()
{
    int n, m, inttemp, min, flagg=0;
    char temp[30];

    printf("\n Urutkan data berdasarkan:\n");
    printf("  (1) Nama Barang\n");
    printf("  (2) Harga Barang\n");
    printf("  Masukkan pilihan: ");
    fflush(stdin); scanf("%d", &n);
    if(n<1 || n>2)
        {printf("\n Pilihan Tidak Tersedia!\n");flagg+=1;}
    printf("\n Pilih Metode Sorting:\n");
    printf("  (1) Bubble Sort\n");
    printf("  (2) Selection Sort\n");
    printf("  (3) Insertion Sort\n");
    printf("  Masukkan pilihan: ");
    fflush(stdin); scanf("%d", &m);
    if(m<1 || m>3)
        {printf("\n Pilihan Tidak Tersedia!\n"); flagg+=1;}

    //Bubble Sort Nama
    if(n==1 && m==1)
    {
        for(n=0; n<length; n++)
        {
            for(m=0; m<length-n-1; m++)
            {
                if(strcmp(pd[m].nama_barang, pd[m+1].nama_barang)>0)
                {
                    strcpy(temp, pd[m].nama_barang);
                    strcpy(pd[m].nama_barang, pd[m+1].nama_barang);
                    strcpy(pd[m+1].nama_barang, temp);

                    inttemp = pd[m].harga_barang;
                    pd[m].harga_barang = pd[m+1].harga_barang;
                    pd[m+1].harga_barang = inttemp;

                    strcpy(temp, pd[m].kategori);
                    strcpy(pd[m].kategori, pd[m+1].kategori);
                    strcpy(pd[m+1].kategori, temp);
                }
            }
        }
    }
    //Selection Sort Nama
    else if(n==1 && m==2)
    {
        for(n=0; n<=length; n++)
        {
            min = n;
            for(m=1+n; m<length; m++)
            {
                if(strcmp(pd[m].nama_barang, pd[min].nama_barang)<0)
                {
                    min = m;
                }
            }
            strcpy(temp, pd[n].nama_barang);
            strcpy(pd[n].nama_barang, pd[min].nama_barang);
            strcpy(pd[min].nama_barang, temp);
            printf("%s\n", pd[n].nama_barang);
            inttemp = pd[n].harga_barang;
            pd[n].harga_barang = pd[min].harga_barang;
            pd[min].harga_barang = inttemp;

            strcpy(temp, pd[n].kategori);
            strcpy(pd[n].kategori, pd[min].kategori);
            strcpy(pd[min].kategori, temp);
        }
    }
    //Insertion Sort Nama
    else if(n==1 && m==3)
    {
        for (n=1; n<length; n++)
        {
            m = n;
            while(m>0 && strcmp(pd[m].nama_barang, pd[m-1].nama_barang)<0)
            {
                strcpy(temp, pd[m].nama_barang);
                strcpy(pd[m].nama_barang, pd[m-1].nama_barang);
                strcpy(pd[m-1].nama_barang, temp);

                inttemp = pd[m].harga_barang;
                pd[m].harga_barang = pd[m-1].harga_barang;
                pd[m-1].harga_barang = inttemp;

                strcpy(temp, pd[m].kategori);
                strcpy(pd[m].kategori, pd[m-1].kategori);
                strcpy(pd[m-1].kategori, temp);

                m--;
            }
        }
    }
    if(flagg==0)
    {
        penanda+=1;
        printf("\n  Barang telah diurutkan sesuai nama!\n");
    }

}

void Belanjaan()
{
    int n;

    system("cls");
    printf(" List barang belanjaan Anda: \n");
    for(n=0; n<l; n++)
    {
        printf("  (1) %s x %d\n", kj[n].nama_barang, kj[n].jumlah_barang);
    }
}

void total_harga()
{
	int n, total_per_item;
	printf("\n Total harga belanjaan anda: \n");
	for(n=0; n<l; n++)
    {
        total_per_item = kj[n].harga_barang * kj[n].jumlah_barang;
        total+=total_per_item;
        printf("  %s (Rp. %d) x %d \t= Rp. %d\n", kj[n].nama_barang, kj[n].harga_barang, kj[n].jumlah_barang, total_per_item);
    }
    printf("------------------------------------------\n");
    printf("\t\t\t  total = Rp. %d", total);
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
    //Alat Tulis
    strcpy(pd[0].nama_barang, "Pensil 2B");
    pd[0].harga_barang = 4000;
    strcpy(pd[0].kategori, "atk");
    strcpy(pd[1].nama_barang, "Penghapus");
    pd[1].harga_barang = 3500;
    strcpy(pd[1].kategori, "atk");
    strcpy(pd[2].nama_barang, "Buku tulis");
    pd[2].harga_barang = 5000;
    strcpy(pd[2].kategori, "atk");
    strcpy(pd[3].nama_barang, "Penggaris 30 cm");
    pd[3].harga_barang = 3000;
    strcpy(pd[3].kategori, "atk");
    strcpy(pd[4].nama_barang, "Pulpen");
    pd[4].harga_barang = 4000;
    strcpy(pd[4].kategori, "atk");
    strcpy(pd[5].nama_barang, "Stipo");
    pd[5].harga_barang = 7000;
    strcpy(pd[5].kategori, "atk");
    strcpy(pd[6].nama_barang, "Rautan");
    pd[6].harga_barang = 3000;
    strcpy(pd[6].kategori, "atk");
    strcpy(pd[7].nama_barang, "Stabilo");
    pd[7].harga_barang = 9000;
    strcpy(pd[7].kategori, "atk");
    strcpy(pd[8].nama_barang, "Sticky notes");
    pd[8].harga_barang = 4000;
    strcpy(pd[8].kategori, "atk");
    strcpy(pd[9].nama_barang, "Paper clips");
    pd[9].harga_barang = 3000;
    strcpy(pd[9].kategori, "atk");
    //Makanan dan Minuman
    strcpy(pd[10].nama_barang, "Cheetos");
    pd[10].harga_barang = 2100;
    strcpy(pd[10].kategori, "mm");
    strcpy(pd[11].nama_barang, "Lays");
    pd[11].harga_barang = 2300;
    strcpy(pd[11].kategori, "mm");
    strcpy(pd[12].nama_barang, "Doritos");
    pd[12].harga_barang = 2100;
    strcpy(pd[12].kategori, "mm");
    strcpy(pd[13].nama_barang, "Chitato");
    pd[13].harga_barang = 3000;
    strcpy(pd[13].kategori, "mm");
    strcpy(pd[14].nama_barang, "Pringles");
    pd[14].harga_barang = 4000;
    strcpy(pd[14].kategori, "mm");
    strcpy(pd[15].nama_barang, "Nuka Cola");
    pd[15].harga_barang = 5000;
    strcpy(pd[15].kategori, "mm");
    strcpy(pd[16].nama_barang, "Sprote");
    pd[16].harga_barang = 5000;
    strcpy(pd[16].kategori, "mm");
    strcpy(pd[17].nama_barang, "Pepso");
    pd[17].harga_barang = 4500;
    strcpy(pd[17].kategori, "mm");
    strcpy(pd[18].nama_barang, "Funta");
    pd[18].harga_barang = 5000;
    strcpy(pd[18].kategori, "mm");
    strcpy(pd[19].nama_barang, "Teh Bundar");
    pd[19].harga_barang = 6000;
    strcpy(pd[19].kategori, "mm");
    //Kebutuhan rumah tangga
    strcpy(pd[20].nama_barang, "Detergen");
    pd[20].harga_barang = 30000;
    strcpy(pd[20].kategori, "rt");
    strcpy(pd[21].nama_barang, "Pel");
    pd[21].harga_barang = 25000;
    strcpy(pd[21].kategori, "rt");
    strcpy(pd[22].nama_barang, "Pengharum Ruangan");
    pd[22].harga_barang = 15000;
    strcpy(pd[22].kategori, "rt");
    strcpy(pd[23].nama_barang, "Sabun Wajah");
    pd[23].harga_barang = 20000;
    strcpy(pd[23].kategori, "rt");
    strcpy(pd[24].nama_barang, "Sabun Mandi");
    pd[24].harga_barang = 5000;
    strcpy(pd[24].kategori, "rt");
    strcpy(pd[25].nama_barang, "Kemoceng");
    pd[25].harga_barang = 12000;
    strcpy(pd[25].kategori, "rt");
    strcpy(pd[26].nama_barang, "Handuk");
    pd[26].harga_barang = 9000;
    strcpy(pd[26].kategori, "rt");
    strcpy(pd[27].nama_barang, "Hand Sanitizer");
    pd[27].harga_barang = 10000;
    strcpy(pd[27].kategori, "rt");
    strcpy(pd[28].nama_barang, "Taplak Meja");
    pd[28].harga_barang = 12000;
    strcpy(pd[28].kategori, "rt");
    strcpy(pd[29].nama_barang, "Masker");
    pd[29].harga_barang = 1000;
    strcpy(pd[29].kategori, "rt");

    length = sizeof(pd)/sizeof(pd[0]);

	menu:
	garis(41);
    printf("|    Selamat datang di Toko Bahagia!\t|\n");
    garis(41);
    printf("\n");
    printf(" Silahkan pilih menu dibawah ini:\n");
    printf("  (1) Belanja\n");
    printf("  (2) List Harga Barang\n");
    printf("  (3) Sorting Barang\n");
    printf("  (4) Cari Barang\n");
    printf("  (5) Keranjang\n");
    printf("  (6) Total Harga Belanjaan\n");
    printf("  (7) Check Out\n\n");
    printf("  Masukkan pilihan: ");
    scanf("%d", &n);

    switch(n){
        case 1:
            belanja();
            lanjut();
            goto menu;
        case 2:
        	list_harga();
        	lanjut();
        	goto menu;
        case 3:
            sort();
            lanjut();
            goto menu;
        case 4:
            search();
            lanjut();
            goto menu;
        case 5:
            Belanjaan();
            lanjut();
            goto menu;
        case 6:
        	total_harga();
        	lanjut();
        	goto menu;
        case 7:
        	checkout();
        	break;
    }
}
