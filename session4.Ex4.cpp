#include <stdio.h>
int main(){
	int month;
	printf("Moi ban nhap thang");
	scanf("%d",&month);
	switch(month){
		case 1:
			printf("thang 1 co 31 ngay \n");
			break;
		case 2:
			printf("thang 2 co 28 ngay nhung trong nam nhuan có 29 ngay \n");
			break;
		case 3:
			printf("thang 3 co 31 ngay \n");
			break;
		case 4:
			printf("thang 1 co 30 ngay \n");
			break;
		case 5:
			printf("thang 1 co 31 ngay \n");
			break;
		case 6:
			printf("thang 1 co 30 ngay \n");
			break;
		case 7:
			printf("thang 1 co 31 ngay \n");
			break;
		case 8:
			printf("thang 1 co 31 ngay \n");
			break;
		case 9:
			printf("thang 1 co 30 ngay \n");
			break;
		case 10:
			printf("thang 1 co 31 ngay \n");
			break;
		case 11:
			printf("thang 1 co 30 ngay \n");
			break;
		case 12:
			printf("thang 1 co 31 ngay \n");
			break;
		default:
			printf("so thang khong hop le \n");									
	}
	return 0;
}
