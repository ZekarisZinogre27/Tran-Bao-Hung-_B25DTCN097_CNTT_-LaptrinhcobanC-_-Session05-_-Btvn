#include <stdio.h>
int main() {
    float heSoLuong, luong, phuCap, thuong = 0;
    int ngayCong, chucVu;
    const int LUONG_CO_BAN_NGAY = 160000;
    printf("Nhap he so luong: ");
    scanf("%f", &heSoLuong);
    printf("Nhap so ngay cong trong thang: ");
    scanf("%d", &ngayCong);
    printf("Nhap chuc vu (1: Nhan vien, 2: To truong, 3: Quan ly): ");
    scanf("%d", &chucVu);
    switch(chucVu) {
        case 1:
            phuCap = 500000;
            break;
        case 2:
            phuCap = 1000000;
            break;
        case 3:
            phuCap = 2000000;
            break;
        default:
            printf("Chuc vu khong hop le!\n");
            return 0;
    }
    if(ngayCong > 26) {
        thuong = (ngayCong - 26) * 200000;
    }
    luong = ngayCong * LUONG_CO_BAN_NGAY * heSoLuong + phuCap + thuong;
    printf("\nLuong nhan vien: %.0f VND\n", luong);
    return 0;
}
