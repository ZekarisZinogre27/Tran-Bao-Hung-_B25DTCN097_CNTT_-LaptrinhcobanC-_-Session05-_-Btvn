#include <stdio.h>
int main() {
	int a;
	int b;
	printf("Nhap so nguyen a: ");
	scanf("%d", &a);
	printf("Nhap so nguyen b: ");
	scanf("%d", &b);
	if(a > b){
		printf("So lon hon la %d", a);
	}else if(b > a){
		printf("So lon hon la %d", b);
	}else{
		printf("Ca hai so bang nhau");
	}
	return 0;
}
