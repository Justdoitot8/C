#include <stdio.h>
int main(){
	
	char isim[20];
	char soyIsim[20];
	int yas;
	
	//kullanicidan isim girisi alindi.
	printf("isim: ");
	scanf("%s", &isim);
	
	
	printf("soyisim: ");
	scanf("%s", &soyIsim);
	
	
	printf("yas: ");
	scanf("%d", &yas);
	
	//kosul verildi
	if(yas>=18){
		
		printf("%d yas ehliyet almaya uygunsunuz.",yas);
		
	}else{
		
		printf("%d yas Ehliyet almaya uygun degilsiniz.",yas);
		
	}
	

	return 0;
}
