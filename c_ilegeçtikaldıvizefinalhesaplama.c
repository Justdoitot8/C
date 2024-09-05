
#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int vize;
	int final;
	int toplam=(vize*0.3)+(final*0.7);
	
	printf("Vize notunuz: ");
	scanf("%d", &vize);
	
	printf("Final notunuz: ");
	scanf("%d", &final);
	
	
	if(toplam>90){
		printf("Harika bir puanla gectiniz.");
	} else if(toplam>60){
		printf("Gectiniz.");
	} else{
		printf("Kaldiniz.");
	}
	
	return 0;	
	
}
