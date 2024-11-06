#include<stdio.h>
main()
{	
int faktoriyel =1;
int sayi;
printf("faktöryeli alýncaka bir sayý giriniz");
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
	printf("negatif sayýlarýn faktöriyeli hesaplanzmaz");
	
}


}
