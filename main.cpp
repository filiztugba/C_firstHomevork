/*Bu program basamak çözümlemesi yapmaktadır*/
#include<stdio.h>
void main()
{
int a,b,c,d,e;//Değişken tanımlama
printf("dort basamakli bir sayi giriniz:");
scanf("%d",&a);
b=a/1000;
c=(a%1000)/100;
d=(a%100)/10;
e=a%10; // Burada programda yapılacak hesaplamalar bulunmaktadır.
printf("binler basamagi:%d\n",b);
printf("yuzler basamagi:%d\n",c);
printf("onlar basamagi:%d\n",d);
printf("birler basamagi:%d\n",e);//Burada degerler printf ile okutulmuştur.

}
