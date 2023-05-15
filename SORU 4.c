#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


 typedef struct KUYRUK {
 int sayi;
  struct kuyruk *siradaki ;
 
 }kuyruk;
 
 kuyruk *on = NULL , *arka, *gec, *cikar;
 

void ekleme(int);
void silme();
void goruntuleme();
void bekle();





int main() {
    
    
    printf("**********SORU 4***********\n");
    
	int islem;
	while(1){
	printf("Lutfen asagidaki islemlerden birini seciniz.\n");
	printf("1- EKLEME\n 2-SILME \n 3-GORUNTULEME \n 4-CIKIS\n");
	scanf("%d",&islem);
	
	switch(islem){
		int sayi;
		case 1 : printf("1. secenegi sectiniz.");
		printf ("eklemek istediginiz degeri giriniz:");
		
		scanf ("%d",&sayi);
		ekleme(sayi);
		break;
		case 2: 
		printf("2. secenegi sectiniz.");
		silme();
		break;
		case 3:
			printf("3.secenegi sectiniz.");
			goruntuleme();
			
			break;
			case 4:
				printf("4.secenegi sectiniz.");
				printf("program sonlandirildi.");
			exit(0);
				break;
				
	}

		bekle();
		
	    getch();
	}

	return 0;
	
}




void ekleme(int sayi){
	
	gec=(kuyruk*)malloc(sizeof(kuyruk));
	gec->sayi=sayi;
	gec->siradaki= NULL;
	if(on==NULL){
		on=(kuyruk*)malloc(sizeof(kuyruk));
		on=gec;
		arka=on;
		
 }
 else{
 arka->siradaki=gec;
 arka=arka->siradaki;
 
 }
}

void silme(){
	int sayi;
	if(on==NULL){
		printf("kuyruk bos.\n");
		
	}
		else{
		cikar=(kuyruk*)malloc(sizeof(kuyruk));
		cikar=on;
		on=on->siradaki;
		printf("kuyruktan cikarildi:%d\n",cikar->sayi);
	
		
			}
		
		
}


void bekle(){
    
 printf("devam etmek icin enter'a basin.\n");
 getchar();
 

  
 
}


void goruntuleme(){
if(on==NULL){
printf("kuyruk bos.\n");

}
else{
kuyruk *a =on;
while(a!=NULL){
printf("%d,",a->sayi);
a=a->siradaki;

}
printf("\n");
}}

