#include<stdio.h>
main()
{	
int toplam=0,i;
for(int i=5; i>=1; i--)	
{
	printf("sayi ");
	scanf("%d",&i);
	toplam = toplam + i;
}

printf("toplam:%d",&toplam);

}
