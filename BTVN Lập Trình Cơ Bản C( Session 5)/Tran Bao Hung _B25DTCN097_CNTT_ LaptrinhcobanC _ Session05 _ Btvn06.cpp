#include <stdio.h>
int main() {
    float a, b, ketqua;
    char toantu;
    printf("Nhap so thu nhat: ");
    scanf("%f", &a);
    printf("Nhap so thu hai: ");
    scanf("%f", &b);
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &toantu);
    switch (toantu) {
        case '+':
            ketqua = a + b;
            printf("Ket qua: %.2f\n", ketqua);
            break;
        case '-':
            ketqua = a - b;
            printf("Ket qua: %.2f\n", ketqua);
            break;
        case '*':
            ketqua = a * b;
            printf("Ket qua: %.2f\n", ketqua);
            break;
        case '/':
            if(b == 0)
                printf("Loi: Khong the chia cho 0\n");
            else{
                ketqua = a / b;
                printf("Ket qua: %.2f\n", ketqua);
            }
            break;
        default:
            printf("Loi: Toan tu khong hop le\n");
    }
    return 0;
}
