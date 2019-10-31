#include <stdio.h>

int main()
{
	float x, y, ketqua;
	int luachon;
	printf("Nhap vao x = ");
	scanf("%f", &x);
	printf("Nhap vao y = ");
	scanf("%f", &y);
	
	printf("\n---------- MENU ----------\n");
	printf("1. Cong\n");
	printf("2. Tru\n");
	printf("3. Nhan\n");
	printf("4. Chia\n");
	printf("Ban chon muc nao: ");
	scanf("%d", &luachon);
	
	switch(luachon){
		case 1:
			ketqua = x + y;
			break;
		case 2:
			ketqua = x - y;
			break;
		case 3:
			ketqua = x * y;
			break;
		case 4:
			ketqua = x / (float) y;
			break;
		default:
			printf("Ban da chon sai muc");
			break;
	}
	
	printf("Ket qua = %f", ketqua);
	
	
	return 0;
}
