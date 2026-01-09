
/*
1-Klavyeden girilen pozitif bir N tamsayısına kadar olan sayıları bir diziye yazan ve dizide
okuyarak sayıların karelerini ekrana listeleyen C programını yazınız.

2-Klavyeden girilen pozitif bir N tamsayısına kadar olan sayılardan tek olanları "Tek git
olanları "Cift" adlı diziye yazan ve bunları ayrı ayrı ekrana listeleyen C programını yazınız.

3-1'den 20'ye kadar olan sayılar bir dizide tutulacaktır. Bu dizinin elemanlarının
karelerini alarak başka bir diziye
yazan ve ekrana listeleyen C programını yazınız.

4-1'den 20'ye kadar olan sayılar bir dizide tutulacaktır. Bu dizinin elemanlarının herbrinin n.
inci kuvvetlerini alarak ekrana listeleyen C programını yazınız.

5-Negatif bir değer girilinceye kadar kullanıcıdan sürekli olarak sayı isteyen ve alınan sayılan
bir dizide tutarak negatif değer girdiğinde önceden girilmiş pozitif sayıları ekrana listeleyen C
programını yazınız.

6-Kullanıcı tarafindan girilen birbirinden farklı 10 adet pozitif tamsayı içerisinden en büyük
olanı bulmaya yarayan C programını yazınız.

7-Kullanıcı tarafindan girilen birbirinden farklı 10 adet pozitif tamsayı içerisinden en büyük.
ve en küçük değerin toplamını bulan C programını yazınız.

8-Kullanıcı tarafından girilen birbirinden farklı 10 adet pozitif tamsayı içerisinde istenilen bir
sayının dizinin kaçıncı sırasında olduğunu bulmaya yarayan C programını yazınız.

9-Kullanıcı tarafından girilen birbirinden farklı 10 adet pozitif tamsayı içerisinde asal olan
sayıları bularak listeleyen C programını yazınız.

10-Kullanıcı tarafindan girilen N adet tamsayıyı küçükten büyüğe doğru sıralayan C progra-
minı yazınız.

11-Bilgisayar tarafindan rastgele üretilen (0-100 arasında) N adet sayı bir dizide tutulmaktadı
Buna göre dizi içerisindeki çift olan sayıların yerine O değerini yazan C programını yazınız..


12-Rastgele oluşan pozitif bir N tamsayısına kadar olan sayılardan tek olanları "Tek ÇİFT
olanları "Cift" adlı diziye yazan ve bunları ayrı ayrı ekrana listeleyen C programını yazınız.


13-Kullanıcan kaç satırlı pascal üçgeni istediğini öğrenip o paskal üçgenini yazdıran c programı

14-Kullanıcı tarafindan rastgele girilen N adet tamsayı bir dizide tutulmaktadır. Dizi elemanları arasındaki en büyük
farkı bulmaya yarayan C programını yazınız. (Örneğin 10, 20, 30, 40,
50 dizi değerleri dikkate alındığında en büyük fark 40 olarak çıkacaktır.)

15-Kullanıcı tarafindan girilen N adet tamsayının standart sapmasının hesaplanmasını sağlayan C prgraminı yazınız.

16-Marmara bölgesine düşen yıllık yağış miktarları aylık olarak tutulmak istenmektedir.
Bir yıl 12 ay ve her ay 30 gün olarak kabul edilmektedir. Yağış miktarları 12 ay boyunca her gün
için iki boyutlu bir diziye kaydedilecektir. Buna göre; Marmara bölgesine düşen yıllık toplam yağış
miktarını ve Marmara bölgesine düşen yıllık ortalama yağış miktarını bulan C progrminı yazınız.

17-Kullanıcı tarafindan girilen N adet tamsayı bir dizide tutulmaktadır.
Buna göre dizi elemanlarının tersten gösterilmesini sağlayan C programını yazınız.



*/

#include <bemapiset.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include<time.h>
#include <limits.h>

/*1.SORU
void main() {
    int n;
    printf("Kaç elemanli bir dizi oluşturmak istiyorsun:");
    scanf("%d",&n);

    int array[n];

    for (int i=0;i<n;i++) {
        printf("%d . sayiyi giriniz:",i+1);
        scanf("%d",&array[i]);
    }
    for (int i=0;i<n;i++) {
        array[i]=array[i]*array[i];
        printf("array[%d] = %d\n",i,array[i]);
    }
}
*/
/* 2.SORU
void main() {
    int n,teksayac=0,çiftsayac=0;

    printf("Bir N tam sayisi giriniz:");
    scanf("%d",&n);
    puts("\n");

    int array[n];

    for (int i =0;i<n;i++) {
        printf("%d. Sayiyi Giriniz:",i+1);
        scanf("%d",&array[i]);

        if (array[i]%2==0) {
            çiftsayac++;
        }
        else {
            teksayac++;
        }
    }

    int tek=teksayac;
    int çift=çiftsayac;
    int arraytek[teksayac],arrayçift[çiftsayac];
    for (int i=0;i<n;i++) {
        if (array[i]%2==0) {
            arrayçift[çiftsayac-1]=array[i];
            çiftsayac--;

        }
        else {
            arraytek[teksayac-1]=array[i];
            teksayac--;
        }
    }

    puts("--Tek Sayilar--\n");
    for (int i=0;i<tek;i++) {
        printf("%d\n",arraytek[i]);
    }

    puts("--Çift Sayilar--\n");
    for (int i=0;i<çift;i++) {
        printf("%d\n",arrayçift[i]);
    }



}*/
/*3.SORU
  void main() {

    int array[20],karearray[20];

    for (int i = 0; i < 20; i++) {
        array[i]=i+1;
        karearray[i]=array[i]*array[i];
    }

    puts("--array dizisi elamanları--\n\n");
    for (int i = 0; i < 20; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    puts("--karearray dizisi elamanları--\n\n");
    for (int i = 0; i < 20; i++) {
        printf("karearray[%d] = %d\n", i, karearray[i]);
    }






}*/
/*4.SORU
void main() {
    double n,array[20];
    int n_array[20];
    printf("Kaçıncı dereceden üs alınacak:");
    scanf("%lf", &n);

    for(int i=0;i<20;i++) {
        array[i]=i;
        n_array[i]=pow(array[i],n);
    }

    for(int i=0;i<20;i++) {
        printf("%d\n",n_array[i]);
    }
}*/
/*5. SORU
void main() {
    int n,array[100],sayac=0;;
    while (TRUE) {

        printf("Sayi giriniz:");
        scanf("%d",&array[sayac]);
        puts("\n");


        if (array[sayac]<0) {
            break;
        }
        else {
            sayac++;
        }

    }

    puts("--Girilen Sayilar--\n");
    for (int i=0;i<sayac;i++) {
        printf("%d",array[i]);

    }
}*/
/*6.SORU
void main() {
    int max=0,min,array[10];
    for (int i=0; i<10; i++) {
        printf("%d. sayiyi gir: ", i+1);
        scanf("%d",&array[i]);
        if (array[i]>max) {
            max=array[i];
        }
        if (array[i]<min) {
            min=array[i];
        }

    }

    printf("max=%d min=%d\n", max, min);
}
*/
/*7.SORU
void main() {
    int max=0,min,array[10];
    for (int i=0; i<10; i++) {
        printf("%d. sayiyi gir: ", i+1);
        scanf("%d",&array[i]);
        if (array[i]>max) {
            max=array[i];
        }
        if (array[i]<min) {
            min=array[i];
        }

    }

    int toplam=max+min;
    printf("Max ve Min değerinin toplami=%d",toplam);
}*/
/*8.SORU
int main() {
    int array[10],index;
    for (int i =0;i<10;i++) {
        printf("%d. sayiyi gir:",i+1);
        scanf("%d",&array[i]);puts("\n");
    }
    printf("Hangi sayinin indexini öğrenmek istiyorin:");
    scanf("%d",&index);

    for (int i =0;i<10;i++) {
        if (array[i]==index) {
            printf("%d sayinin indexi = %d",index,i);
            return 0;
        }


    }printf("Dizide olmayan sayi girdiniz.");
}*/
/*9.SORU
void main() {
    int array[10],asalkontrol=0;
    for (int i=0;i<10;i++) {
        printf("Enter Number %d: ", i+1);
        scanf("%d",&array[i]);

        }

    int i=0;
    while (i<10) {
        if (array[i]==2){printf("%d\n",array[i]);}
        for (int j=2;j<array[i];j++) {

            asalkontrol=1;


            if (array[i]%j==0) {
                asalkontrol=0;
                break;
            }
            if (array[i]==2) {
                asalkontrol=1;
                break;
            }

        }
        if (asalkontrol==1) {
            printf("%d \n ",array[i]);
        }
        i++;
    }
}*/
/*10.SORU
 *#include <stdio.h>
int main() {
    int n, i, j, enKucukIndis, gecici;

    // 1. Kullanıcıdan adet bilgisi alma
    printf("Kac adet sayi gireceksiniz: ");
    scanf("%d", &n);

    int dizi[n];

    // 2. Sayıları diziye doldurma
    printf("%d adet tamsayi girin:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }

    // 3. SELECTION SORT (Seçmeli Sıralama) MANTIĞI
    for (i = 0; i < n - 1; i++) {
        // Şu anki pozisyonu (i) en küçük sayının yeri varsayıyoruz
        enKucukIndis = i;

        // i'den sonraki tüm sayıları kontrol ediyoruz
        for (j = i + 1; j < n; j++) {
            if (dizi[j] < dizi[enKucukIndis]) {
                // Eğer daha küçük bir sayı bulursak, yerini not ediyoruz
                enKucukIndis = j;
            }
        }

        // Bulduğumuz en küçük sayıyı, i. sıradaki sayıyla takas ediyoruz
        gecici = dizi[enKucukIndis];
        dizi[enKucukIndis] = dizi[i];
        dizi[i] = gecici;
    }

    // 4. Sonucu ekrana yazdırma
    printf("\nKucukten buyuge siralanmis hali:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}*/
/*11.SORU
void main() {
    srand(time(NULL));
    int array[100];
    for (int i = 0; i < 100; i++) {
        array[i] = rand() % 100+1;
        if (array[i]%2==0) {
            array[i] = 0;
        }
        printf("%d \n ", array[i]);
    }
}*/
/*12.SORU
void main() {
    int N;
    srand(time(NULL));
    printf("Enter to Number N:");
    scanf("%d",&N);

    int array[N],çiftsayac=0,teksayac=0;

    for(int i=0;i<N;i++) {
        array[i] = rand()%100+1;
        if (array[i]%2==0) {
            çiftsayac++;
        }
        if (array[i]%2==1) {
            teksayac++;
        }
    }
    int a=0,b=0;
    int arrayçift[çiftsayac],arraytek[teksayac];
    for (int i=0;i<N;i++) {
        if (array[i]%2==0) {
            arrayçift[a]=array[i];
            a++;
        }
        if (array[i]%2==1) {
            arraytek[b]=array[i];
            b++;
        }
    }
    puts("Tek Sayılar\n");
    for (int i=0;i<teksayac;i++) {
        printf("%d \n",arraytek[i]);
    }
    puts("Çift Sayılar\n") ;
    for (int i=0;i<çiftsayac;i++) {
        printf("%d \n",arrayçift[i]);
    }

}*/
/*13.SORU
int main() {
    int satir, i, j, bosluk;
    long sayi = 1;

    printf("Pascal ucgeni icin satir sayisini girin: ");
    scanf("%d", &satir);

    for (i = 0; i < satir; i++) {
        // Ucgenin düzgün görünmesi için boşlukları yazdırıyoruz
        for (bosluk = 1; bosluk <= satir - i; bosluk++) {
            printf("  ");
        }

        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                sayi = 1; // Her satırın başı her zaman 1'dir
            } else {
                // Kombinasyon formülünün basitleştirilmiş hali
                sayi = sayi * (i - j + 1) / j;
            }
            printf("%4ld", sayi);
        }
        printf("\n");
    }

    return 0;
}*/
/*14.SORU
void main() {
    int n,min=INT_MAX,fark,max=0;
    printf("How many numbers will you enter?");
    scanf("%d",&n);
    int arr[n];

    for(int i=1;i<=n;i++) {
        printf("Enter a Number %d:",i);
        scanf("%d",&arr[i]);

        if(arr[i]>max) {
            max=arr[i];
        }
        if(arr[i]<min) {
            min=arr[i];
        }
    }
    fark=max-min;
    printf("Max - min= %d",fark);

}
*/
/*15.SORU
void main() {
    int n;
    double toplam=0;

    printf("How many numbers will you enter?");
    scanf("%d",&n);

    double arr[n];

    for(int i=0;i<n;i++) {
        printf("Enter the number %d :",i+1);
        scanf("%lf",&arr[i]);
        toplam+=arr[i];
    }
    double ort=toplam/n,delta=0,std_Sapma;
    for (int i=0;i<n;i++) {
        delta+=pow(arr[i]-ort,2);
    }
    std_Sapma=sqrt(delta/n);
    printf("Standard deviation of input numbers: %lf",std_Sapma);



}*/
/*16.SORU
void main() {

    double M[12][30],ort,sum=0;


    for (int i=0;i<12;i++) {
        for (int j=0;j<30;j++) {
            printf("Please enter the amount of rainfall for the %dst day of the %dst month.",i+1,j+1);
            scanf("%lf",&M[i][j]);
            sum+=M[i][j];
        }
    }ort=sum/360;

    printf("Total rainfall amount in the region : %lf,\nAverage rainfall amount in the region: %lf",sum,ort);


}*/
/*17.SORU
void main() {
    int n,temp;
    printf("How many numbers will you enter?:");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++) {
        printf("Enter the number %d:",i+1);
        scanf("%d",&arr[i]);
    }

    puts("the reverse of the entered numbers.\n");
    for(int i=0;i<n/2;i++) {
        temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;

    }
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
}*/