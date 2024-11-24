#include <stdio.h>
int main(){
	int number;
	printf("Moi nhap so cua ban",number);
	scanf("%d",&number);
	if(number % 2 == 0){
		printf("Day la so chan");
	}
	else{
		printf("Day la so le");
	}
	return 0;
}
