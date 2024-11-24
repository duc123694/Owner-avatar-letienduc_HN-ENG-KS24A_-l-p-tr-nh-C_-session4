#include <stdio.h>
int main(){
	int year;
	printf("Moi ban nhap nam: ");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0)||year%400==0){
		printf("Day la nam nhuan");
	}else{
		printf("Day khong phai nam nhuan");
	}
		return 0;
}
