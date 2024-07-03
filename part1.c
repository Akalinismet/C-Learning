#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    /* Veri tipleri ve kullanılan hafıza boyutları
    int(4 bytes) | %d
    double(8 bytes) | %lf
    float(4 bytes) | %f
    char(1 bytes) | %c
    */
/*Veri tipleri ve verilerle basit işlemler */
    int mynumber = 12,mynumber2;
    mynumber2 = 89;
    float mynumber3 = 5.42;
    double mynumber4 = 4.98,mynumber5 =9.69;
    char mychar = 'Z';
    printf("Hello world!\n\"I Learn C Programming\"\n\\\n");
    printf("%d  %d\n%.2f\n%.2lf\n%lf\nMychar:%c\n",mynumber,mynumber2,mynumber3,mynumber4,mynumber5,mychar);


    int numb0;
    printf("lutfen bir sayi giriniz:\n");
    scanf("%d",&numb0);
    printf("girdiginiz sayi;%d\n",numb0);


    double numb1;
    printf("lutfen bir sayi giriniz:\n");
    scanf("%lf",&numb1);
    printf("girdiginiz sayi:%.3lf\n",numb1);


    float numb2;
    printf("lutfen bir sayi giriniz:\n");
    scanf("%f",&numb2);
    printf("tusladiginiz sayi:%.2f\n",numb2);


    char numb3;
    printf("press any number for create your password:\n");
    scanf("%c",&numb3);
    printf("your password tip:%c\n",numb3);


    int yournumb1,yournumb2;
    printf("lutfen birinci sayinizi giriniz:\n");
    scanf("%d",&yournumb1);
    printf("lutfen ikinci sayinizi giriniz:\n");
    scanf("%d",&yournumb2);
    char namepass;
    printf("lutfen isminizin bas harfini giriniz:\n");
    scanf(" %c",&namepass);
    printf("2.sayiniz:%d\nisminizin bas harfi:%c \n",yournumb2,namepass);


    int numb = 123;
    printf("numb degiskeni hafizada %d byte kadar yer kullanir\n",sizeof(numb));
    printf("int degiskeni hafizada %d byte kadar yer kullanir\n",sizeof(int));
    printf("float degiskeni hafizada %d byte kadar yer kullanir\n",sizeof(float));
    printf("double degiskeni hafizada %d byte kadar yer kullanir\n",sizeof(double));
    printf("char degiskeni hafizada %d byte kadar yer kullanir\n",sizeof(char));


    const int myn = 100;
    printf("%d\n",myn);


    printf("pi sayisi:%.2f",PI);

 /*
 Arithmethic Operator
 + toplama operatörü
 - çıkarma operatörü
 * çarpma operatörü
 / bölme operatörü
 % kalan operatörü
 ++ bir arttırma operatörü
 -- bir eksiltme operatörü
  */

     int x = 10;
     int y = 15;
     int z;
     z = x+y;
     printf("%d\n",z);

     float a = 67.456;
     float b = 56.123;
     printf("%.3f",a-b);
     printf("%f %f %d %d %d",a*y,y/x,y%x,++x,--y);

/*
 Assigment Operator
  =  tanılama operatörü
 +=  toplayıp yeniden tanılama operatörü
 -=  çıkarıp yeniden tanılama operatörü
 *=  çarpıp yeniden tanılama operatörü
 /=  bölüp yeniden tanılama operatörü
 %=  kalan alıp yeniden tanılama operatörü
*/

     int x=25;
     int y=15;
     int z=62;
     int s=99;
     int d=100;
     x += 5;
     y -= 12;
     z *= 10;
     s /= 3;
     d %= 33;
     printf("%d\n%d\n%d\n%d\n%d\n",x,y,z,s,d);

/*
 Comparison Operator
  ==  eşitmi operatörü
  !=  eşit değilmi operatörü
   >  büyükmü operatörü
   <  küçükmü operatörü
  >=  büyük eşitmi operatörü
  <=  küçük eşitmi operatörü
*/

     int x=12;
     int y=15;
     printf("%d\n%d\n%d\n%d\n%d\n%d\n",x == y,x != y,x > y,x < y,x >= y,x <= y);

/*
 Logical Operator
 && ve operatörü (iki tarafta 1(True)olursa cevap 1 yoksa 0)
 || ya da operatörü (iki taraftan biri 1(True)olursa 1 yoksa 0)
 !  değili operatörü (başına geldiği durum çıktısını (True/False) tam tersine çevirir (1 ise 0,0ise ))
*/

        int x=55;
        int y=45;
        printf("%d\n",(x<56 && y>38));
        printf("%d\n",(x>100 || y<100));
        printf("%d\n",!(x<56 && y>38));
        printf("%d\n",!(x>100 || y<100));
/*Girilen sayıları karşılaştırma programı */
        int numb1;
        int numb2;

        printf("karsilastirma sihirbazina hos geldiniz\n 1.sayiyi giriniz:\n");
        scanf("%d",&numb1);
        printf("2.sayiyi giriniz:\n");
        scanf("%d",&numb2);
        if(numb1 > numb2)
        {
         printf("1.sayi 2.sayidan buyuktur");
        }
        else if(numb1 < numb2)
        {
         printf("1.sayi 2.sayidan kucuktur");
        }

        else
        {
         printf("1.sayi ve 2.sayi birbirine esittir");
        }

/*Girilen sayının tek mi çift mi olduğunu bulan program*/
         int x;
         printf("tek mi cift mi sihirbazina hos geldiniz\n sayiyi giriniz:\n");
         scanf("%d",&x);
         if ((x %=2) == 1 )
         {
          printf("sayi tektir");
         }
        else {
           printf("sayi cifttir");
        }
/*Yaşa göre oy kullanma durumu hesaplama programı */
        int a;
        printf("oy kullanma durumu sorgu sihirbazina hos geldiniz\nYasinizi giriniz:\n");
        scanf("%d",&a);
        if (a >= 18){
            printf("Tebrikler oy kullanabilirsiz");
        }
        else
        {
           printf("Uzgunuz oy kullanamazsiniz ");
        }



    return 0;
}

