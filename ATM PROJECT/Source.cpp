#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

int main()

{

    int islem;
    int bakiye = 1000;
    int tutar;

    printf("islemler\n1:para cekme\n2:para yatirma\n3:havele yapma\n4:bakiye sorgulama\n5:Kart iade\n\n\n\n\n");
    printf("islemi seciniz:");
    scanf("%d", &islem);

    switch (islem) {
    case 1:
        printf("Bakiyeniz %d\n", bakiye);
        printf("cekilecek tutari giriniz:");
        scanf("%d", &tutar);
        if (tutar > bakiye)
            printf("Yeterli bakiyeniz yok.\n");
        else
        {
            bakiye -= tutar;
            printf("Islem tamamlandi. Kalan bakiyeniz %d", bakiye);
        }
        break;


    case 2:

        printf("Bakiyeniz %d\n", bakiye);
        printf("yatirilacak tutar:");
        scanf("%d", &tutar);


        bakiye = bakiye + tutar;
        printf("Yeni Bakiyeniz: %d \n", bakiye);

        break;


    case 3:

        printf("Bakiyeniz %d\n", bakiye);
        printf("Havele yapilacak tutari giriniz:");
        scanf("%d", &tutar);
        if (tutar > bakiye)
            printf("Yeterli bakiyeniz yok.\n");
        else
        {
            bakiye -= tutar;
            printf("Islem tamamlandi. Kalan bakiyeniz %d", bakiye);
        }
        break;




    case 4:

        printf("Bakiyeniz %d\n", bakiye);
        break;


    case 5:

        printf("Kart iade ediliyor yine bekleriz\n");

        break;


    default:
        printf("Bilinmeyen islem");
        break;
    }

}



