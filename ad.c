#include <stdio.h>

int main(){
	int sayi1;
	float sayi2;
	int sayi3;
	int sayi4;
	int sec;
	
	printf("1. sayiyi giriniz: ");
	scanf("%d", &sayi1);

	printf("2. sayiyi giriniz: ");
	scanf("%f", &sayi2);

	printf("3. sayiyi giriniz: ");
	scanf("%d", &sayi3);

	printf("4. sayiyi giriniz: ");
	scanf("%d", &sayi4);
	
	printf("birini seciniz: \n[1] toplama islemi:\n[2] bolme islemi:\n[3] cikarma islemi:\n[4] carpma islemi:");
	scanf("%d", &sec);
	
switch(sec){
		case 1:printf("birinci durumu sectiniz.\n toplama islemi sudur: %f\n",sayi1+sayi2+sayi3+sayi4);break;
		case 2:printf("ikinci durumu sectiniz.\n bolme islemi sudur:%d\n ",sayi1/sayi2/sayi3/sayi4);break;
		case 3:printf("ucuncu durumu secrtiniz.\n cýkarma islemi sudur: %d\n",sayi1-sayi2-sayi3-sayi4);break;
		case 4:printf("dorduncu durumu sectiniz.\n carpma islemi sudur:%d\n ",sayi1*sayi2*sayi3*sayi4);break;
		default:printf("yanls tuslama yaptiniz: ");
	}
	return 0;
}
