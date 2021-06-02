#include <stdio.h>
#include <math.h>
int armstrong(int sayi);
int palindromik(int sayi);
int mukemmel(int sayi); 

int main()    
{    
    int sayi; 
    int bolum; 
    printf("Lütfen bir sayı giriniz: ");
    scanf("%d", &sayi); 
    printf("Fonksiyon Seçiniz ## 1- Armstrong / 2- Palindrom / 3- Mükemmel Sayı: ");
    scanf("%d", &bolum);
    if(bolum == 1){
        armstrong(sayi);
    }else if(bolum == 2){
        palindromik(sayi);
    }else if(bolum == 3){
        mukemmel(sayi);
    }else{
    printf("Lütfen düzgün Fonksiyon giriniz!");    
    }
}  

int armstrong(int sayi){//fonksiyon tanımı
      int originalNumber, remainder, result = 0, n = 0 ;

       originalNumber = sayi;
    
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }

    originalNumber = sayi;

    while (originalNumber != 0)
    {
        remainder = originalNumber%10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }

    if(result == sayi)
         printf("%d Armstrong Sayısıdır.",sayi);
    else
       printf("%d Armstrong Sayısı değildir.",sayi);

}

int palindromik(int sayi)
{
    int r,sum=0,temp;    
   
    temp=sayi;    
    
    while(sayi>0)    
    {    
        r=sayi%10;    
        sum=(sum*10)+r;    
        sayi=sayi/10;    
    }    
 
    if(temp==sum)    
        printf("%d Palindrome Sayıdır.",sayi);    
    else    
    printf("%d Palindrome Değildir",sayi);   
  
}


int mukemmel(int sayi)
{

    int toplam = 0;
    
    for(int i = 1; i < sayi; i++)
    {
        if(sayi % i == 0){
            toplam += i;                   
        }
    }
    if(sayi == toplam){
        printf("%d Sayısı mükemmel bir sayıdır.",sayi);
    }
    else{
        printf("%d Sayısı mükemmel bir sayı değildir.",sayi);
    }
}
