#include <stdio.h>
#include <math.h>

int main(){
	int a;
	printf("Nhap a: ");
	scanf("%d", &a);
	
	// kiem tra so nguyen to
	bool flag = true;
	for(int i = 2 ; i <= a / 2 ; i++){
		if(a % i == 0){
			flag = false;
			break;
		}
	}
	if(flag)
		printf("%d la so nguyen to\n", a);
	else
		printf("%d khong phai la so nguyen to\n", a);
		
	// kiem tra so chinh phuong
	int tmp = (int)sqrt(a);
	if( tmp * tmp == a )
		printf("%d la so chinh phuong\n", a);
	else
		printf("%d khong phai la so chinh phuong\n", a);
		
	// kiem tra so hoan hao
	int tong = 0;
	for(int i = 1 ; i < a ; i++){
		if(a % i == 0)
			tong += i;
	}
	if(a == tong)
		printf("%d la so hoan hao", a);
	else
		printf("%d khong phai la so hoan hao", a);
	
	
	return 0;
}
