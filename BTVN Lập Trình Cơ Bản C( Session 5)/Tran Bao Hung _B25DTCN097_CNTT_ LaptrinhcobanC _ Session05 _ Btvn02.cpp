#include <stdio.h>
int main() {
	int a;
	int b;
	printf("Nhap so thuc a: ");
	scanf("%d", &a);
	printf("Nhap so thuc b: ");
	scanf("%d", &b);
	if(a == 0 && b == 0){
		printf("Phuong trinh co vo so nghiem");
	}else if(a == 0 && b != 0) {
		printf("Phuong trinh vo nghiem");
	}else if(a != 0){
		printf("Phuong trinh co nghiem duy nhat x=-b/a ");
	}
	return 0;
}
