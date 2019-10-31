#include <stdio.h>

int tinhTong(int n){
	int tong = 0;
	for(int i = 1 ; i <= n ; i++)
		tong += i;
		
	return tong;
}

int tinhTong_congthuc(int n){
	return n * (n + 1 ) / 2;
}

int main(){
	
	int n;
	scanf("%d", &n);
	
	printf("Tong tu 1 toi n la %d\n", tinhTong(n));
	
	// ngoai ra ban co the su dung cong thuc tinh tong nhanh: n * (n + 1 ) / 2
	printf("Tong su dung cong thuc la %d", tinhTong_congthuc(n));
	return 0;
}
