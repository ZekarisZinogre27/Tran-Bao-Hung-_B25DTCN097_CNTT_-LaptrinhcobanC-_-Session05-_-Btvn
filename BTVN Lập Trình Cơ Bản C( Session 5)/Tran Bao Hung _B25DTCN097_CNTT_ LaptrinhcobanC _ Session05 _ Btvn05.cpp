#include <stdio.h>
int main() {
    int tuoi;
    float giaVe = 20000;
    float soTienPhaiTra;
    printf("Nhap Tuoi : ");
    scanf("%d", &tuoi);
    if(tuoi < 0 || tuoi > 120) {
        printf("Tuoi khong hop le\n");
        return 0;
    }
    if(tuoi < 6) {
        soTienPhaiTra = 0;
    }else if(tuoi <= 18) {
        soTienPhaiTra = giaVe * 0.5;
    }else if(tuoi <= 60) {
        soTienPhaiTra = giaVe;
    }else{
        soTienPhaiTra = giaVe * 0.7;
    }
    printf("So tien ve : %.0f VNÐ\n", soTienPhaiTra);
    return 0;
}
