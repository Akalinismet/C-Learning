#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //boolean kullanmak için gerekli kütüphane
#include <math.h> //Bazı matematiksel fonksiyonlar için gerekli kütüphane

int main() {
/*Girilen iki sayinin karsilastirilmasi*/
    int sayi1, sayi2;
    printf("Lütfen iki sayi giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);

    if (sayi1 == sayi2) {
        printf("%d = %d\n", sayi1, sayi2);
    } else if (sayi1 > sayi2) {
        printf("%d > %d\n", sayi1, sayi2);
    } else {
        printf("%d < %d\n", sayi1, sayi2);
    }
/*iç içe if kullanimi*/
    int sayi1, sayi2;
    printf("Lütfen iki sayi giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);

    if(sayi1 >= sayi2)
    {
        if (sayi1 == sayi2)
        {
            printf("%d = %d",sayi1,sayi2);
        }
        else{
            printf("%d > %d",sayi1,sayi2);
        }
    }
    else{
        printf("%d < %d",sayi1,sayi2);
    }

/*1 den 100 e kadar olan sayýlarýn toplamini hesaplayan program*/
    int i;
    int a=0;
    for(i=1;i<=100;i++)
    {
        a = a+i ;
    }
    printf("%d ",a);

/*1 den girilen sayýya kadar olan sayýlarýn toplamýný hesaplayan program*/
    int i,equal=0;
    int numb;

    printf("sayi giriniz:");
    scanf("%d",&numb);

    for (i=1;i<=numb;i++)
    {
        equal += i;
    }
    printf("toplam:%d",equal);

/*0 ile 10 arasındaki tek ve çift sayıları yazan program*/
    int i;
    int a;

    for(i=0;i<9;i)
    {
        i = i+2;
        printf(" %d\n",i);
    }
    for(i=1;i<9;i)
    {
        i = i+2;
        printf(" %d\n",i);
    }

/* 0dan 100e kadar olan sayıların ekrana yazdırılması*/
    int i = 0;

    while (i <= 100)
        {
           printf(" %d\n",i);
           i++;
        }
/*Girilen sayıya 100 eklenerek 1000 e ulaşan program*/
    int i;
    printf("lutfen bir sayi giriniz:");
    scanf("%d",&i);

    while(i <= 1000)
    {
        printf("%d\n",i);
        i += 100;
    }

/*0dan 10a kadar tek ve cıft sayıların whıle kullanılarak ekrana yazdırılması*/
    int i=0;
    int a=1;

    while(i <= 10)
    {
        printf("%d ",i);
        i +=2;
    }
    while(a <= 10)
    {
        printf("%d ",a);
        a +=2;
    }

/*10dan 1e kadar sayıları yazan program*/
    int i=10;

    while(!(i <= 0))
    {
        printf("%d ",i);
        i -=1;
    }
*/
/* Do-while kullanımı*/
    int i=1;
    do{
        printf(" %d\n",i);
        i++;
    }while(i < 10);

    int i;
    int numb;
    printf("lutfen bir sayi giriniz:\n");
    scanf("%d",&numb);

    do{
        printf(" %d\n",i*numb);
        i++;
    }while(i<10);

    int i;

    for(i=0;i<=10;i++)
    {
        if(i == 6)
        {
            break;
        }
        printf("%d\n",i);

    }

    int i;

    for(i=0;i<=10;i++)
    {
        if(i == 6)
        {
            continue;
        }
        printf("%d\n",i);

    }

    int i;

        for(i=0;i<=10;i++)
        {
            if(i == 5)
            {
                continue;
            }
            printf("%d\n",i);

            if(i == 8)
            {
                break;
            }

        }

    int day;
    printf("lutfen gun numarasini giriniz:");
    scanf("%d",&day);

    switch(day)
    {
        case 1:printf("pazaretsi");
        break;
        case 2:printf("sali");
        break;
        case 3:printf("carsamba");
        break;
        case 4:printf("persembe");
        break;
        case 5:printf("cuma");
        break;
        case 6:printf("cumartesi");
        break;
        case 7:printf("pazar");
        break;
        default :printf("hatalı gun numarası");
        break;
    }

    int numb1;
    int numb2;
    char symbol;
    printf("lutfen yapmak istediginiz islemi giriniz: (sayi (+-/*) sayi seklinde)");
    scanf("%d %c %d",&numb1,&symbol,&numb2);

    switch(symbol)
    {
        case '+':printf("%d",numb1+numb2);
        break;
        case '-':printf("%d",numb1-numb2);
        break;
        case '*':printf("%d",numb1*numb2);
        break;
        case '/':printf("%d",numb1/numb2);
        break;
        default :printf("hatali islem yaptiniz");
        break;
    }
/*Boolean*/
    bool x=true,y=false;

    printf("%d %d",x,y);


/*Mat.h kütüphanesi fonksiyonlar

ceil() = bir üst sayıya yuvarlama
floor() = bir alt sayıya yuvarlama
sqrt() = karekök alma
pow() = üst alma (önce taban sayı sonra üst)
abs() = mutlak değer alma (integer(%d) olmak zorunda yoksa 0 verir)
*/
    printf("%.2f\n",ceil(4.5));
    printf("%.2f\n",floor(9.964));
    printf("%.2f\n",sqrt(1298));
    printf("%.2f\n",pow(5,5));
    printf("%d\n",abs(-78));
    printf("%.2f\n",abs(-112.6));


    float a=9/4;
    printf("%f\n",a);

    float b=(float)9/4;
    printf("%f\n",b);

    float c=9.0/4.0;
    printf("%f",c);

/*ASCII*/

    printf("%d\t %d\t %d\t",'a','V','c');

/*ASCII ile alfabe*/

    int i;

    for(i='a';i<='z';i++)
    {
        printf("%c",i);
    }












    return 0;
}























