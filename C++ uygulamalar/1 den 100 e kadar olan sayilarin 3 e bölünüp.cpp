#include<stdio.h>
 int main();
{	

int sayi,s=0,a=0,g=0;
printf("Bir Say� Griniz");
scanf("%d",&sayi);


 if(s%3==0)
 {	
a++;
 }
 else
 {	
 g=g+1;
 }
if(s<100)
{	
goto a;
}
printf("3 e b�l�nenlerin sayisi=%d sayac=%d 3'e b�l�nemyenlerin sayisi=%d'",a,s,g);
}
