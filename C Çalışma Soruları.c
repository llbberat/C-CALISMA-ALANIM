/*
 1-Girilen Sayının Kaç basamaklı olduğunu söyleyen kodu yazınız.
 2-Girilen 3 Basamaklı sayının basamaklarının küplerinin toplamının sayının kendisine eşit olup
 olmadığını kontrol eden program.
 3-10 ile 1000 Arasında tam kare sayıları ekrana yazdıran kod.
 4-Çarpım tablosunu kodlayınız.
 5-Girilen sayının 5 in kuvveti olup olmadını kontrol eden program.
 6-Dost sayı: X ve Y pozitif tam sayılar olmak üzere eğer x sayılarının çarpanları toplamı
 y ye eşitse bu sayılar dost sayılardır. Girilen sayıların dost sayı olup olmadını bulan kod.
 7-Fibonacci sayısının ilk 10 terimini ekrana yazan kod.
 8- Girilen bir sayının pozitif,negatşf veya 0 olduğunu bulan programın kodunu yazınız.
 9- Girilen sayının mükemmel sayı olup olmadığını kontrol eden kod
 10- Bir uçak 15 dakika boyunca düzgün hızlanarak hızı 480 km/h oluyor sonra 20 dakkika
 sabit hızla gidiyor ve 15 dakika boyunca düzgün yavaşlayarak hızı 0 oluyor herhangi bir t
 anında hızı veren kod
 11- Girilen 4 basamaklı sayının ilk iki basamağın ile son iki bamağın toplamının karesi kendine
 eşit olan sayıya orjinal sayı denir. Orjinal sayımı tespit eden kod yazınız.
 12- 4 haneli bir sayının birler onlar yüzler ve binler basamaığını bulan kod.

*/


/* 1. SORU
#include <stdio.h>


void main() {

 int i,sayi,defsayi,a,sonbasamak;
 printf("Sayı girimiz:");
 scanf("%d",&sayi);
 defsayi=sayi;
 i=0;

 while (defsayi>9) {

  a=defsayi/10;
  sonbasamak=defsayi-10*a;
  defsayi=a;
  i++;
 }
 i++;

 printf("Basamak sayisi %d",i);

}*/
/*2. SORU
#include <stdio.h>
#include <math.h>
void main() {

 int sayi,defsayi,t,c,a;
 float sonbasamak;

 printf ("Sayi giriniz: ");
 scanf("%d",&sayi);
 defsayi=sayi;

 t=0;

 while (defsayi>9) {

  a=defsayi/10;
  sonbasamak=defsayi-a*10;
  c=pow(sonbasamak,3.0);
  t=t+c;
  defsayi=a;

 }
 t=t+pow(a,3.0);

 if (t==sayi) {
  printf("%d sayisinin küpler toplamı girilen sayıya eşittir",sayi);
 }
 else {
  printf("%d sayisinin küpler toplamı girilen sayıya eşit değildir",sayi);

 }
}
*/
/*3. SORU
#include <stdio.h>
void main() {
 int i,a;
 printf("-Tam Kare Sayılar- \n");
 for (i=4;i<=31;i++) {
  a=i*i;
  printf("%d \n",a);



 }
}
*/
/* 4. SORU
#include <stdio.h>
void main() {

 int i,a,c;
 for (i=1;i<=9;i++) {

  for (a=1;a<=9;a++) {

   c=i*a;

   printf("%d * %d = %d \n",i,a,c);
  }

  a=1;


 }


}*/
/*5. SORU
#include <stdio.h>
#include <math.h>
int main() {
 double i;
 int sayi;
 printf("Kontrol etmek istediğiniz sayiyi giriniz: ");
 scanf("%d",&sayi);
 i=1;

 while (pow(5,i)<=sayi) {

  i++;
  if (sayi==pow(5,i)) {
   printf("Girilen sayı 5 in kuvveti");
   return 0;
  }

 }

 printf("Girilen sayı 5 in kuvveti değil");
 return 0;


}*/
/* 6. SORU
#include <stdio.h>
void main() {
 int x,y,i,t;
 t=0;
 printf("İki sayiyida giriniz (X Y):");
 scanf("%d %d",&x,&y);


 for (i=1;i<=x;i++) {

  if (x%i==0) {
   t=t+i;
  }
 }

 if (t==y) {
  printf("Girilen sayilar dost sayilardir");
 }
 else {
  printf("Girilen sayilar dost sayı değil");
 }
}
*/
/* 7.SORU
#include <stdio.h>

void main(){

 int i,defa,a,b;

 a=1;
 b=1;
 i=1;
printf("1");
 while (i<=10) {
  printf("%d",b);
  defa=a;
  a=b;
  b=defa+b;
  i++;
 }

}*/
/* 8.SORU
#include <stdio.h>
void main() {

 int sayi;
 printf("Sayı giriniz:");
 scanf("%d",&sayi);

 if (sayi==0) {
  printf("Girilen sayı 0");
 }
 if (sayi<0) {
  printf("Girilen sayı negatif");
 }
 if (sayi>0) {
  printf("Girilen sayı pozitif");
 }
 else {
  printf("Lütfen sayı giriniz.");
 }
}*/
/* 9.SORU
#include <stdio.h>
void main() {

 int t,i,sayi;

 printf("Bir sayı giriniz:");
 scanf("%d",&sayi);

 t=0;

 for (i=1;i<sayi;i++) {
  if (sayi%i==0) {
   t=t+i;
  }



 }

 if (sayi==t) {
  printf("Girilen sayı mukkemel sayi");
 }
 else {
  printf("Girilen sayi mukkemmel degil");
 }


}
*/
/*10. SORU
#include <stdio.h>
int main() {
 int v,a,t;
 a=480/15;

 printf("Hizi hesaplamak istediginiz dakikayı giriniz:");
 scanf("%d",&t);

 if (t<=15 && t>0) {
  v=t*a;
  printf("%d dakikasindaki hiziniz :  %d ",t,v);
  return 0;
 }

 if (t<=35 && t>15) {
  v=15*a;
  printf("%d dakikasindaki hiziniz :  %d ",t,v);
  return 0;
 }
 if (t<=50 && t>35) {
  v=480-a*(t-35);
  printf("%d dakikasindaki hiziniz :  %d ",t,v);
  return 0;
 }
 else {
  printf("Lütfen sayı giriniz.");
  return 0;

 }

}*/
/* 11.SORU
#include <stdio.h>
#include <math.h>
int main() {

 int sayi,c;
 double a,b;

 printf("4 basamakli bir sayi giriniz:");
 scanf("%d",&sayi);

 if (sayi<1000 || sayi>9999) {
  printf("Lütfen 4 basamaklı bir sayi giriniz");
  return 0;
 }

 a=sayi/100;
 b=sayi%100;

 c=pow(a,b);

 if (c==sayi) {
  printf("Orjinal sayi");
  return 0;
 }

 else {
  printf("Orjinal sayi degil");
  return 0;
 }

}*/
/* 12.SORU
#include <stdio.h>
void main() {
 int y,o,b,bi,sayi;
 printf("4 basamakli sayi giriniz:");
 scanf("%d",&sayi);
 b=sayi/1000;
 sayi=sayi-b*1000;
 y=sayi/100;
 sayi=sayi-y*100;
 o=sayi/10;
 bi=sayi%10;

 printf("Sayının binler basamagi %d, Yüzler basamagi %d, onlar basamagi %d,birler basamagi %d",b,y,o,bi);

}*/