#include<stdio.h>
#include<conio.h>
main()
{	
int sayi;
float karekok;
printf("Bir Sayi Giriniz :");
scanf("%d",&sayi);
karekok=sqrt(sayi);
if(sayi >= 0)	
{
printf("Sayinin Karek�k�=%f",karekok);		
}
else	
{
printf("Negatif Sayi girdiniz : %d",sayi);	
}
}
