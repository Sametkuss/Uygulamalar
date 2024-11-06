#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{	
setlocale(LC_ALL,"Turkish");

int secim,a,b,sonuc;
printf("1-toplama\n2-Çikarma\n3-Çarpma\n4-Bölme\n5-Çikis\n");
printf("Yapmak Ýstediðiniz Ýþlemi giriniz(1/2/3/4/5)");
scanf("%d",secim);

switch(secim)	
{	
case 1 :
	
	printf("2 Sayý giriniz\n");
	scanf("%d",&a,&b);
	sonuc = a+b;
	
	printf("Toplama Ýþleminin Sonucu=%d,",sonuc);

	break;
	
}
case 2 :
	scanf("%d",&a,&b);
	sonuc = a-b;
	
	printf("Çýkarma Ýþlemini Sonucu=%d",sonuc);
	break;

case 3 :
	scanf("%d",&a,&b);
	sonuc = a*b;
	
	printf("Çarpma Ýþleminin Sonucu=%d",sonuc);
	break;	
	
	case 4 :
		
	scanf("%d",&a,&b);
	sonuc = a/b;
	
	printf("Bölme Ýþleminin Sonucu=%d",sonuc;
	break;

case 5 :
	exit(0);
	default : 
	printf("Hatalý seçim");
	
	


	

}
