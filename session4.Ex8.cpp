#include <stdio.h>
int main(){
	int a,b,c;
	printf("Moi ban nhap canh thu nhat: ");
	scanf("%d",&a);
	printf("Moi ban nhap canh thu hai: ");
	scanf("%d",&b);
	printf("Moi ban nhap canh thu ba: ");
	scanf("%d",&c);
	if (a+b>c&&a+c>b&&b+c>a){
		printf("Day la ba canh tam giac");
	}else{
		printf("Day khong phai ba canh tam giac");
	}
	
	return 0;
}
