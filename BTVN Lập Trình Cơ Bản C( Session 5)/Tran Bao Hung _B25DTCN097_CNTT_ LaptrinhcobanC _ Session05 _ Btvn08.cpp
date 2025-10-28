#include <stdio.h>
int main() {
    float so_m3, tong_tien = 0;
    const int GIA_BAC_1 = 6000;
    const int GIA_BAC_2 = 7000;
    const int GIA_BAC_3 = 8500;
    const int GIA_BAC_4 = 10000;
    printf("Nhap so m3 nuoc tieu thu trong thang: ");
    scanf("%f", &so_m3);
    if(so_m3 < 0) {
        printf("So m3 khong hop le!\n");
        return 0;
    }
    if(so_m3 <= 10) {
        tong_tien = so_m3 * GIA_BAC_1;
    }else if(so_m3 <= 20) {
        tong_tien = 10 * GIA_BAC_1 + (so_m3 - 10) * GIA_BAC_2;
    }else if(so_m3 <= 30) {
        tong_tien = 10 * GIA_BAC_1 + 10 * GIA_BAC_2 + (so_m3 - 20) * GIA_BAC_3;
    }else{
        tong_tien = 10 * GIA_BAC_1 + 10 * GIA_BAC_2 + 10 * GIA_BAC_3 + (so_m3 - 30) * GIA_BAC_4;
    }
    printf("Tong tien nuoc phai tra: %.0f VND\n", tong_tien);
    return 0;
}
