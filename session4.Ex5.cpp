#include <stdio.h>
int main(){
	int a,b,c;
	printf("Moi nhap so thu nhat:");
	scanf("%d",&a);
	printf("Moi nhap so thu hai:");
	scanf("%d",&b);
	printf("Moi nhap so thu ba:");
	scanf("%d",&c);
	if(c<a&&c>b||c>a&&c<b){
		printf("so %d nam trong khoang so %d va so %d",c,a,b);
	}else{
		printf("so %d khong nam trong khoang so %d va so %d" ,c,a,b);
	}
	return 0;
}
