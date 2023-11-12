#include <stdio.h>
int main(){
	int phut;
	float thueBao, cuoc, tong;
	
	printf("nhap vao so phut: ");
	scanf("%d", &phut);
	thueBao = 25000;
	 if (phut <= 50) {
        cuoc = phut * 600;
    } else if (phut <= 200) {
        cuoc = 50 * 600 + (phut - 50) * 400;
    } else if (phut <= 400) {
        cuoc = 50 * 600 + 150 * 400 + (phut - 200) * 200;
    } else {
        cuoc = 50 * 600 + 150 * 400 + 200 * 200 + (phut - 400) * 100;
    }
   tong = thueBao + cuoc;
   
   printf("day la cuoc: %f\n", tong);
}
