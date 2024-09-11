#include <stdio.h>
int main(){
	
	int sayi=156555;
	
	int tersayi=0;
	
	while(sayi){
		
		tersayi=tersayi*10+sayi%10;
		sayi/=10;
	}
	
	printf("sayi: %d", tersayi);
	
	return 0;
	
	
}
