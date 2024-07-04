#include <stdio.h>
#include <stdlib.h>

int main() {

/*Diziler*/
/*Tek boyutlu diziler*/
    int dizi[5]={1,3,5,7,9};
    printf("%d %d",dizi[0],dizi[4]);


    int dizi[10];
    int i;

    for(i=0;i<10;i++)
    {
        dizi[i]=2*i;

    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",dizi[i]);
    }
/* for döngü alıştırması*/
    int i;
    for(i=1;i<=100;i++)
    {
        printf("%d.ismet\n",i);
    }


    int i;
    int dizi[5]={12,56,78,99,52};

    dizi[4]=798;
    dizi[2]=1;

    for(i=0;i<5;i++)
    {
        printf("%d\n",dizi[i]);
    }

/*kullanıcıdan alınan sayıları dızıye ekleyıp yazdırma*/
    int i,x,y,z;
    printf("lutfen 3 adet sayi giriniz:");
    scanf("%d %d %d",&x,&y,&z);

    int girdi[3]={x,y,z};

    for(i=0;i<3;i++)
    {
        printf("%d\n",girdi[i]);
    }

    int sayi[3];

    for(int i=0;i<3;i++)
    {
        scanf("%d",&sayi[i]);
    }
    for(int i=0;i<3;i++)
    {
        printf("%d\n",sayi[i]);
    }
    /*kullanıcıdan alınan sayıları dızıye ekleyıp yazdırma-(Do while)*/
    int sayi[3];
    int i;

    do
    {
        scanf( "%d",&sayi[i]);
        i++;
    }while(i<3);
    i = 0;
    do
    {
        printf("%d\n",sayi[i]);
        i++;
    } while(i<3);

/*2 Boyutlu diziler*/
    int can[2][2]={{8,9},{988,564}};

    printf("%d\n%d",can[0][1],can[1][1]);

/*Diagonal matris yazdırma*/
    int mat[10][10];
    int i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i==j)
            {
                mat[i][j]=1;
            }
            else
            {
               mat[i][j]=0;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {

         printf("%4d",mat[i][j]);

        }
        printf("\n");
    }
/*Alıştırma diziler*/
    int dizi1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int dizi2[3][4]={{12,11,10,9},{8,7,6,5},{4,3,2,1}};
    int toplam[3][4];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
           printf("%4d",toplam[i][j]);
        }
        printf("\n");
    }


    return 0;
}
























