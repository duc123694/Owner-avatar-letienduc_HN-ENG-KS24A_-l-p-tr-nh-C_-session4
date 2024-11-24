#include <stdio.h>
int main(){
	float chiSoCu,chiSoMoi,soDien,tienDien;
	printf("Moi ban nhap vao chi so cu: ");
	scanf("%f",&chiSoCu);
	printf("Moi ban nhap vao chi so moi: ");
	scanf("%f",&chiSoMoi);
	if(chiSoMoi<chiSoCu){
		printf("chi so moi khong the nho hon chi so cu \n");
		return 1;
	} 
	soDien = chiSoMoi - chiSoCu;
	if(soDien<50){
		tienDien = soDien * 10000;
	}else if (soDien < 100){
		tienDien=(50 * 10000)+(soDien -50)*15000;
	}else if (soDien<150){
		tienDien+50*10000+50*15000+(soDien-100)*20000;
	}else if (soDien<200){
		tienDien=50*10000+50*15000+50*20000+(soDien-150)*25000;
	}else{
		tienDien=50*10000+50*15000+50*20000+50*250000+(soDien-200)*30000;
	} 
	printf("So dien tieu thu trong thang laf: %.2f kWh \n",soDien);
    printf("tien dien phai tra la %.2f VND ",tienDien);
	return 0;
}
