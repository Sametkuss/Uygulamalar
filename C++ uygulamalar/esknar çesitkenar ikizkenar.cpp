#include<stdio.h>
main()
{	
int a,b,c ;
printf(" a deðerini giriniz");
scanf("%d",&a);

printf(" b deðerini giriniz");
scanf("%d",&b);

printf(" a deðerini giriniz");
scanf("%d",&b);

if(a==b && b==c){
	printf("Eskenar");
}
else if(a!=b && a!=c && b!=c){
	printf("çeþitkenar üçgen");
}
else
{	
printf("ikizkenar");
}




}
