#include <stdio.h>
int main() {
	float diem_tb;
	printf("Nhap vao diem trung binh: ");
	scanf("%f", &diem_tb);
	if(diem_tb < 0 || diem_tb > 10){
		printf("Diem khong hop le. Vui long nhap lai");
	}else {
		if(diem_tb < 5){
			printf("Hoc luc yeu");
		}else if(diem_tb < 6.5){
			printf("Hoc luc trung binh");
		}else if(diem_tb < 8){
			printf("Hoc luc kha");
		}else{
				printf("Hoc luc gioi");
		}
	}
	return 0;
}
