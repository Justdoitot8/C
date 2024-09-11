#include <stdio.h>
int main(){
	
	int sayi=156555;
	
	int terssayi=0;
	
	while(sayi){
		
		terssayi=terssayi*10+sayi%10;
		sayi/=10;
	}
	
	printf("sayi: %d", terssayi);
	
	return 0;
	
	
}
