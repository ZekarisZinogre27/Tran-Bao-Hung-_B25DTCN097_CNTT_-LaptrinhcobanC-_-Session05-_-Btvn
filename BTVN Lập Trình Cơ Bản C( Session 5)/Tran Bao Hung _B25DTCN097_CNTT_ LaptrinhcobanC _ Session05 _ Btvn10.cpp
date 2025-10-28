#include <stdio.h>
int main() {
    float ElectricityUsage, ElectricityConsumption = 0, AdditionalFee = 0, TotalBills = 0;
    int ConsumerType;
    const float ADDITION_FEE_FAMILY = 0.05, ADDITION_FEE_BUSINESS = 0.10, ADDITION_FEE_PRODUCTION = 0.08;
    const float PRICE_LEVEL_1 = 1500, PRICE_LEVEL_2 = 2000, PRICE_LEVEL_3 = 2500, PRICE_LEVEL_4 = 3000;
    printf("Nhap vao so dien tieu thu trong thang (kWh): ");
    scanf("%f", &ElectricityUsage);
    printf("Nhap vao loai ho tieu dung (1: Gia dinh, 2: Kinh doanh, 3: San xuat): ");
    scanf("%d", &ConsumerType);
    if(ElectricityUsage <= 50) {
        ElectricityConsumption = ElectricityUsage * PRICE_LEVEL_1;
    }else if(ElectricityUsage <= 100) {
        ElectricityConsumption = 50 * PRICE_LEVEL_1 + (ElectricityUsage - 50) * PRICE_LEVEL_2;
    }else if(ElectricityUsage <= 200) {
        ElectricityConsumption = 50 * PRICE_LEVEL_1 + 50 * PRICE_LEVEL_2 + (ElectricityUsage - 100) * PRICE_LEVEL_3;
    }else{
        ElectricityConsumption = 50 * PRICE_LEVEL_1 + 50 * PRICE_LEVEL_2 + 100 * PRICE_LEVEL_3 + (ElectricityUsage - 200) * PRICE_LEVEL_4;
    }
	switch(ConsumerType) {
        case 1:
            AdditionalFee = ElectricityConsumption * ADDITION_FEE_FAMILY;
            break;
        case 2:
            AdditionalFee = ElectricityConsumption * ADDITION_FEE_BUSINESS;
            break;
        case 3:
            AdditionalFee = ElectricityConsumption * ADDITION_FEE_PRODUCTION;
            break;
        default:
            printf("Loai ho tieu dung khong hop le!\n");
            return 1;
    }
    TotalBills = ElectricityConsumption + AdditionalFee;
    printf("\nTien dien theo bac thang: %.2f VND", ElectricityConsumption);
    printf("\nPhu phi: %.2f VND", AdditionalFee);
    printf("\nTong tien dien phai tra: %.2f VND\n", TotalBills);
    return 0;
}
