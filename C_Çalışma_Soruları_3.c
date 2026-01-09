/*
1-Rastgele  tanımlanan nxm boyutlarında bir matrise eleman alan
ve matris elemanlarını ekrana listeleyen C programını yazınız.

2-Rastgele  tanımlanan nxm boyutlarındaki iki matrise eleman alan ve bu iki mat-
risin toplamını yaparak sonucu ekrana gösteren C programını yazınız.

3-Kullanıcı tarafindan tanımlanan nxn boyutlarında bir matrise eleman alan ve matrisin
transpozesinin alarak ekrana gösteren C programını yazınız.

4-Kullanıcı tarafindan tanımlanan nxn boyutlarındaki iki matrise eleman alan ve bu iki mat-
risin çarpımını yaparak sonucu ekrana gösteren C programını yazınız.

5-Kullanıcı tarafindan tanımlanan nxn boyutlarında bir matrise eleman alan ve girilen matri-
sin simetrik olup olmadığını bulan C programını yazınız.

6-Tersten okunuşu ile normal okunuşu aynı olan sayılara palindron sayı adı verilmektedir.
Buna göre kullanıcı tarafından girilen bir sayının palindron sayı olup olmadığını bulan C
programinı yazınız.


7-Kullanıeı tarafindan girilen N adet pozitif tamsayı bir dizide tutulmaktadır. Bu tamsayılar
N değeri kadar ötelenmek istenmektedir. Öteleme işleminde diziden taşan değerler tekrar dizinin en
başından itibaren
diziye eklenmiş olacaklardır. Örneğin aşağıda 4 elemanlı bir dizi verilmiştir. 10 değeri 4 ötelemede dizinin 4. sırasına,
20 değeri 4 ötelemeden sonra taşmadan dolayı dizinin 2. sırasına yerleşecektir. Buna göre verilen bilgiler doğrultusunda
uygun C programını yazınız*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*1.SORU
  void main() {
    srand(time(NULL));
    int n,m;
    printf("Enter the nxm(n m):");
    scanf("%d %d",&n,&m);
    int M[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            M[i][j]=rand()%100+1;
            printf("%3d",M[i][j]);
        }
        printf("\n");
    }
}
*/
/*2.SORU
void main() {
    int n,m;
    srand(time(NULL));
    printf("Enter to nxm(n m):");
    scanf("%d %d",&n,&m);

    int M[n][m],N[n][m],C[n][m];
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            M[i][j]=rand()%50;
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            N[i][j]=rand()%50;
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            C[i][j]=M[i][j]+N[i][j];
            printf("%3d ",C[i][j]);
        }
        printf("\n");
    }

}*/
/*3. SORU
void main() {
    srand(time(NULL));
    int m,n;
    printf("enter to mxn:(m n)");
    scanf("%d %d",&m,&n);

    int M[m][n],transpoze_M[n][m];


    puts("--M MATRIS--");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            M[i][j]=rand()%10;
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
    puts("--Transpose MATRIS--");
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            transpoze_M[j][i]=M[j][i];
            printf("%d ",transpoze_M[j][i]);
        }
        printf("\n");
    }
}*/
/*4. SORU
void main() {
    srand(time(NULL));

    int m,n;
    printf("Enter mxn:");
    scanf("%d %d",&m,&n);

    int A[m][n],B[m][n],C[m][n];

    puts("A MAtRİSİ\n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            A[i][j]=rand()%10;
            printf("%3d",A[i][j]);
        }
        printf("\n");
    }puts("B MATRİSİ\n");
    for (int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            B[i][j]=rand()%10;
            printf("%3d",B[i][j]);
        }
        printf("\n");
    }for(int i=0;i<m;i++){
        for(int j=0;j<n;j++) {
            C[i][j]=A[i][j]*B[i][j];
            printf("%3d",C[i][j]);
        }printf("\n");

    }

}*/
/*5.SORU
void main() {

    int m,n,control=1;
    printf("enter matrix size(mxn):");
    scanf("%d %d",&m,&n);

    if (m!=n) {
        printf("the matrix is not simetric");
    }

    int M[m][n];

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            printf("enter to matris M[%d][%d]:",i,j);
            scanf("%d",&M[i][j]);
        }
    }

    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            if (M[i][j]!=M[j][i]) {
                control=0;
                break;;
            }
            else {
                control=1;
            }
        }
    }

    if (control==1) {
        printf("the matrix is simetric:");
    }else {
        printf("the matrix is not simetric");
    }

}
*/
/*6.SORU
void main() {
    int n,temp,orj_n,ters=0;
    printf("Enter to number:");
    scanf("%d",&n);
    orj_n=n;

    while (n>0) {
        temp=n%10;
        ters=ters*10+temp;
        n=n/10;
    }

    if (orj_n==ters) {
        printf("Polindron Number");
    }else {
        printf("Not polindron Number");
    }


}*/
/*7.SORU
void main() {
    int n,s,temp;
    printf("How many digits will you enter?:");
    scanf("%d",&n);

    int arr[n],temparr[n],yeni_index;
    for(int i=0;i<n;i++) {
        printf("Enter the number %dst:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        if (i==n-1) {
            printf("%d",arr[i]);
            break;
        }
        printf("%d-",arr[i]);
    }

    printf("How much scrolling will you do?: ");
    scanf("%d",&s);
    puts("\n");
    s=s%n;

    for (int i=0;i<n;i++) {

        yeni_index =(i-s+n)%n;
        temparr[yeni_index]=arr[i];




    }

    for (int i=0;i<n;i++) {
        printf("%d%s",temparr[i],(i==n-1 ? "":"-"));
    }

}*/