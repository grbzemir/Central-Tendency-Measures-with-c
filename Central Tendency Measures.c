#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

// Central Tendency Measures
// aritmetik ortalamayı bulma
// medyan
// mod



float aritmetikOrt(int dizi[],int n)
{
    int i;
    int  toplam=0;

    for(i=0;i<n;i++)

    {

        toplam=toplam+dizi[i];


    }


    return (float) toplam/n;


}


float medyan(int dizi[],int n)
{
    int i;
    int j;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(dizi[i]>dizi[j+1])
            {
                int temp=dizi[i];
                dizi[j]=dizi[j+1];
                dizi[j+1]=temp;
            }
        }
    }

    if(n%2==1)
    return (float) dizi[(n-1)/2 ] ;
    else
    return (float) ( dizi[ (n) /2 ] + dizi [ (n-1) /2 ] ) /2;
    
   
}

float mod(int dizi[],int n)

{
    int i;
    int j;
    int indis;
    int tekrarSayisi;
    int buyuk=1;

    for(i=0;i<n;i++)

    {
        tekrarSayisi=0;
        for(j=i+1;j<n-1;j++)

        {
            if(dizi[i]==dizi[j])

            {
                tekrarSayisi++;

            } 
                
        }
    
      if (tekrarSayisi>buyuk)
      {
          buyuk=tekrarSayisi;
          indis=i;

      }
      
    }
        
    return (float)   dizi[indis];
    
}


int main ()
{
 
 int n;
 int i;

 printf("kac adet sayi gireceksiniz: ");
 scanf("%d",&n);
 int dizi[n];

 for(i=0;i<n;i++)

    {

        printf("sayi giriniz: ");
        scanf("%d",&dizi[i]);

    }

    float sonuc;

    sonuc=aritmetikOrt(dizi,n);
    printf("\nAritmetik Ortalamasi: %.2f",sonuc);


    sonuc=medyan(dizi,n);
    printf("\nMedyan %.2f",sonuc);

    sonuc=mod(dizi,n);
    printf("\nMod %.2f",sonuc);


    return 0;
}