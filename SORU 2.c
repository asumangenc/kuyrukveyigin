#include <stdio.h>
#include <stdlib.h>
int main(){
	
	printf("********SORU 2***********\n");
	
	
	int x,a,y;
	int dizi[8]={4,8,3,84,47,76,9,24,68};
	for(x=0;x<8;x++){
	
		for(y=0;y<7;y++){
			if(dizi[y]>dizi[y+1]){
				a=dizi[y+1];
				dizi[y+1]=dizi[y];
				dizi[y]=a;
			}
		}
		
		}
	
	for(x=0;x<8;x++){
	
	printf("%d,",dizi[x]);
}

		int dusuk=0;
		int yuksek=7;
		int g=0;
		int s;
	
	printf("\ndizideki aranacak elemani giriniz:");
	scanf("%d",&s);
while(dusuk<=yuksek){
	int orta=dusuk+(yuksek-dusuk)/2;
	if(dizi[orta]==s){
		g=1;
		printf("aradiginiz eleman:%d.sirada bulundu\n",orta);
		break;
		
	}
	else if(dizi[orta]<s){
		dusuk=orta+1;
	}
	else {
		yuksek=orta-1;
		
	}
}
	if(g==0){
		printf("aradiginiz eleman dizide bulunamadi\n");
	}
	return 0;
}
