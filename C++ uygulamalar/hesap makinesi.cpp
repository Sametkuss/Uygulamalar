#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
main()
{	
setlocale(LC_ALL,"Turkish");

int secim,a,b,sonuc;
printf("1-toplama\n2-�ikarma\n3-�arpma\n4-B�lme\n5-�ikis\n");
printf("Yapmak �stedi�iniz ��lemi giriniz(1/2/3/4/5)");
scanf("%d",secim);

switch(secim)	
{	
case 1 :
	
	printf("2 Say� giriniz\n");
	scanf("%d",&a,&b);
	sonuc = a+b;
	
	printf("Toplama ��leminin Sonucu=%d,",sonuc);

	break;
	
}
case 2 :
	scanf("%d",&a,&b);
	sonuc = a-b;
	
	printf("��karma ��lemini Sonucu=%d",sonuc);
	break;

case 3 :
	scanf("%d",&a,&b);
	sonuc = a*b;
	
	printf("�arpma ��leminin Sonucu=%d",sonuc);
	break;	
	
	case 4 :
		
	scanf("%d",&a,&b);
	sonuc = a/b;
	
	printf("B�lme ��leminin Sonucu=%d",sonuc;
	break;

case 5 :
	exit(0);
	default : 
	printf("Hatal� se�im");
	
	


	

}
