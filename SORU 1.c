#include <stdio.h>
#include <stdlib.h>



int arama(int dizi[],int x);

int main() {
	printf("*******SORU 1*********\n");
	
int a,du;
printf("dizi uzunlugunu giriniz:");
scanf("%d",&du);
a=du;
int dizi[a];
int i=0;
while(a>0){
	printf("elemanlari giriniz:",i+1);
	scanf("%d",&dizi[i]);
	i++;
	a--;
	
}
int x,z,b;

printf("aranacak elemani giriniz:");
scanf("%d",&x);
b=arama(dizi,x);
if(b==-1){
	
	printf("aranan sayi dizide yok\n");


}
else{
	
printf("aradiginiz sayi %d.elemanda bulundu.",b);

}
	



	return 0;
} 
int arama(int dizi[],int x){
	int i,a,z;
	for(i=0;i<dizi[a];i++){
	
		if(dizi[i]==x)
		
		

	return i;}
	
	
	return -1;

}





