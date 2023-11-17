/* Diziler ve fonksiyon ilişkisinin irdelenmesi
 * Giriş değeri olarak fonksiyonlar
 * Call by reference  (adres olarak çağırma )
 * Call by value      ( doğrudan değer kullanarak çağırrma ) */
// dersten kalanların bulunması :
/*
-----------------------------------------------
ÖDEV-III (a) : son teslim tarihi 30 mart 23:55
------------------------------------------------
Not gecme oranının hesaplanması problemini fonksiyonn kullanmadan sadece dizi
kullarak hesaplayın: Çıktılar değişmeyecek sadece dizi kullanımı olacak !!!
 -----------------------------------------------
ÖDEV-III (b) : son teslim tarihi 30 mart 23:55
------------------------------------------------
Not gecme oranının hesaplanması problemini dizi kullanmadan sadece fonksiyon
kullarak hesaplayın: Çıktılar değişmeyecek sadece fonksiyon kullanımı olacak !!!
 -----------------------------------------------
ÖDEV-III (c) : son teslim tarihi 30 mart 23:55
------------------------------------------------
Not gecme oranının hesaplanması problemini dizi / fonksiyon kullanmadan
 hesaplayın: Çıktılar değişmeyecek fonksiyon ya da dizi kullanımı olmayacak  !!!
*/
#include <stdio.h>
#define MEVCUT 2
// prototipler tanımlanırken sadece değişken tipi tanımlanması yeterlidir !!!
// degişken ya da dizi isimlerinin verilmesine gerek yoktur
void notlariAL(int[]);         // notların bir diziye yazdırılması
int kalanlariBUL(int[], int);  // giris: Not dizisi ve geçer not
                                // çıkış : kalan sayisi
int main()
{
    int sinifNOT[MEVCUT]={0};  // Sinif notlarinin diziye kaydedilmesi
    int kalanSayisi; int gecmeNotu=60; // degisken tanimlamalari

    notlariAL(sinifNOT);   // notlarin alinmasi
    kalanSayisi = kalanlariBUL(sinifNOT, gecmeNotu);   // sinif gecme oranının tespiti
    // MEVCUT-kalanSayisi = gecenSayisi;
    printf("Dersten %d ogrenci gecmistir !!!", kalanSayisi);
    return 0;
}


void notlariAL(int sinifNotu[])
{
    for (int i=0; i<MEVCUT ; i++) {
        printf("%d. ogrencinin ortalamasini giriniz: ", i+1);
        scanf("%d", &sinifNotu[i]);
    }
}

int kalanlariBUL(int sinifNotu[], int gecNOT) // gecme sayısının hesaplanması
{
int kalan = 0;
for(int i=0; i<MEVCUT; i++)
    if(sinifNotu[i]>gecNOT)
    kalan++;

    return kalan;
}

