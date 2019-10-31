#include <stdio.h>

int main(){
	float toan, ly, hoa;
	float diemtrungbinh;
	
	scanf("%f %f %f", &toan, &ly, &hoa); // nhap diem
	diemtrungbinh = (toan + ly + hoa) / 3; // 3 so deu la so thuc, khong can phai ep kieu
	
	printf("Diem trung binh = %.2f", diemtrungbinh);
	
	return 0;
}
