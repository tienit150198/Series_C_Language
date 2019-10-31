#include <stdio.h>
#include <math.h>

bool kiemtraSoNguyenTo(int a){
	if(a < 2)
		return false;
	float isSqrt = sqrt(a);
	
	for(int i = 2 ; i <= isSqrt ; i++)
		if(a % i == 0)
			return false;
	return true;
}

bool kiemtraSoChinhPhuong(int a){
	return (float)sqrt(a) == (int)sqrt(a);
}

bool kiemtraSoHoanHao(int a){
	int tong = 0;
	for(int i = 1 ; i < a ; i++){
		if(a % i == 0)
			tong += i;
	}
	
	return tong == a;
}

int main(){
	int a;
	printf("Nhap a: ");
	scanf("%d", &a);
	
	if(kiemtraSoChinhPhuong(a))
		printf("%d la so chinh phuong\n", a);
	else
		printf("%d khong la so chinh phuong\n", a);
		
	if(kiemtraSoNguyenTo(a))
		printf("%d la so nguyen to\n", a);
	else
		printf("%d khong la so nguyen to\n", a);
	
	if(kiemtraSoHoanHao(a))
		printf("%d la so hoan hao\n", a);
	else
		printf("%d khong la so hoan hao\n", a);
	
	return 0;
}
