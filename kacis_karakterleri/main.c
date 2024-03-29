#include "stdio.h" // kutuphane tanımı
#include "math.h" // frfjrfjkhe

void kare (int d1); // prototip tanımandı...

int main(void)
{   int sayi, sonuc;  // değişkenlerin tanımlanması
    printf("karesi alinacak sayilari giriniz: ");  // degiskenlarin alınması
    scanf("%d", &sayi);       // kullanicidan alinan deger. hafızaya yazılması
    kare(sayi);     //fonksiyonun cagrilmasi
    return 0;
}
// fonksiyonun gövdesi
void kare(int d1)
{   int sonuc;
    sonuc = pow(d1,2) ; // power d1^2
    printf("carpim sonucu = %d ", sonuc);
      // sonucun ana fonksiyona gönderilmesi
}