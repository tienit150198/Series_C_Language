#include "stdio.h"
#include "stdlib.h"
typedef struct{
	int ngay,thang,nam;
}NgayThang;

typedef struct{
	char hoTen[50];
	int tuoi;
	NgayThang date;
}DanhSach;
int main(){
	DanhSach a[10];
	int i;
	printf("Nhap danh sach\n");
	printf("----------------\n");
	for(i = 0 ; i < 2; i++){
		printf("Thanh vien thu %d\n", i+1);
		printf("Ten: ");
		fflush(stdin);
		gets(a[i].hoTen);
		
		printf("Tuoi: ");
		scanf("%d", &a[i].tuoi);
		
		printf("Nhap ngay - thang - nam: ");
		scanf("%d %d %d", &a[i].date.ngay, &a[i].date.thang, &a[i].date.nam);
	}
	printf("----------------\n");
	printf("%-30s %-5s %5s\n", "Ho ten", "Tuoi", "Sinh Nhat");
	for(i = 0 ; i < 2 ;i++){
		printf("%-30s %-5d %d-%d-%d\n", a[i].hoTen, a[i].tuoi, a[i].date.ngay, a[i].date.thang, a[i].date.nam);
	}
	
	return 0;
}
