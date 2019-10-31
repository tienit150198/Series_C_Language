#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a , &b); // nhap a, b;
	
	float ketqua = a / (float)b;
	printf("%.2f", ketqua);
	
	return 0;
}
