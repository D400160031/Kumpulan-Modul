    #include<stdio.h>
int batasdaya,bulanini,bulanlalu,jumlahpemakaian,total;
void head()
{
    printf("=========================\n");
    printf("PLN WILAYAH SURAKARTA\n");
}

void hitung()
{
 printf("Batas Daya Yang Tersedia:\n");
 printf("1. 450 VA\n");
 printf("2. 900 VA\n");
 printf("3. 1300 VA\n\n");



 printf("Masukkan Batas Daya Di Rumah Anda (1/2/3): ");
 scanf("%d",&batasdaya);

 if(batasdaya==1)
 {
  printf("\nMasukkan Angka Meteran Bulan Lalu: ");
    scanf("%d",&bulanlalu);
    printf("Masukkan Angka Meteran Bulan Ini : ");
    scanf("%d",&bulanini);

    jumlahpemakaian=bulanini-bulanlalu;
    printf("\nJumlah Pemakaian Listrik Anda Bulan Ini: %d kWH\n",jumlahpemakaian);
    printf("Biaya Beban: Rp.11000\n");
    total=jumlahpemakaian*11000;
    printf("Total Biaya : Rp.%d", total);

    printf("\n\n-TERIMA KASIH-");
 }
 else if(batasdaya==2)
 {
  printf("\nMasukkan Angka Meteran Bulan Lalu: ");
    scanf("%d",&bulanlalu);
    printf("Masukkan Angka Meteran Bulan Ini : ");
    scanf("%d",&bulanini);

    jumlahpemakaian=bulanini-bulanlalu;
    printf("\nJumlah Pemakaian Listrik Anda Bulan Ini: %d kWH\n",jumlahpemakaian);
    printf("Biaya Beban: Rp.20000\n");
    total=jumlahpemakaian*20000;
    printf("Total Biaya : Rp.%d",total);
 }
 else if(batasdaya==3)
 {
  printf("\nMasukkan Angka Meteran Bulan Lalu: ");
    scanf("%d",&bulanlalu);
    printf("Masukkan Angka Meteran Bulan Ini : ");
    scanf("%d",&bulanini);

    jumlahpemakaian=bulanini-bulanlalu;
    printf("\nJumlah Pemakaian Listrik Anda Bulan Ini: %d kWH\n",jumlahpemakaian);
    printf("Biaya Beban: Rp.30000\n");
    total=jumlahpemakaian*30000;
    printf("Total Biaya : Rp.%d",total);

}}
void main()
{
    head();
    hitung();
}

