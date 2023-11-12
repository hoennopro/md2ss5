#include <stdio.h>
int main(){
	float thuNhap, thue, tong;
	
	printf("nhap vao thu nhap: ");
	scanf("%f", &thuNhap);
	
	if(thuNhap <= 5000000){
		thue = thuNhap *5/100;
	}else if(thuNhap <= 10000000){
		thue = thuNhap *10/100;
	}else if(thuNhap <= 18000000){
		thue = thuNhap *15/100;
	}else if(thuNhap <= 32000000){
		thue = thuNhap *20/100;
	}else if(thuNhap <= 52000000){
		thue = thuNhap *25/100;
	}else if(thuNhap <= 80000000){
		thue= thuNhap *30/100;
	}else{
		thue = thuNhap *35/100;
	}
	tong = thuNhap - thue;
	
	printf("thue cua ban la: %f\n", thue);
	printf("tong thu nhap cua ban la: %f\n", tong);
	
	 
} 

