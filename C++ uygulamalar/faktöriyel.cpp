#include<stdio.h>
main()
{	
int faktoriyel =1;
int sayi;
printf("fakt�ryeli al�ncaka bir say� giriniz");
scanf("%d",sayi);

if(sayi>0)	
{
		while(sayi>=2)	
		{
			faktoriyel * = sayi;
			sayi --;
		}
		printf("sonuc=%d",&sayi);

}
else if(sayi==0)	
{
	printf("sayi 0");
}
else if(sayi<0)	
{
	printf("negatif say�lar�n fakt�riyeli hesaplanzmaz");
	
}


}
