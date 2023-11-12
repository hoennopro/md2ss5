#include <stdio.h>

int main() {
    float doanhThu, hoaHong;
    //nhap doanh thu
    printf("doanh thu ban hang: ");
    scanf("%f", &doanhThu);

    //tinh hoa hong
    if (doanhThu <= 100) {
        hoaHong = 0.05 * doanhThu;
    } else if (doanhThu <= 300) {
        hoaHong = 0.1 * doanhThu;
    } else {
        hoaHong = 0.2 * doanhThu;
    }

    printf("hoa hong la: %f\n", hoaHong);

}
