/* 

   ALGORİTMA İLE C ÖĞRENİYORUZ 
   
   
   ADIM 1: Kütüphanemizi ekleyelim
   
   ADIM 2: Ana fonksiykonu tanımlayalım
    
   ADIM 3: Ekrana 'Hello World' yazdıralım
   
   ADIM 4: Programı sonlandıralım
   


*/



/*
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

*/


#include <stdio.h>

int main(){
	
	int time=21;
	
	if(time>18){
		printf("Good evening.");
	}else{
		printf("Good day.");
	}
	return 0;
	
	
}
























