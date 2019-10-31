#include <stdio.h>

bool kiemtraDoiXung(int a){
	int tong = 0, tam = a;
	
	while(tam > 0){
		tong = tong * 10 + tam%10;
		tam /= 10;
	}
	
	return tong == a;
}

int main(){
	int a;
	printf("Nhap a: ");
	scanf("%d", &a);
	
	if(kiemtraDoiXung(a))
		printf("Doi xung");
	else
		printf("Khong doi xung");
	
	
	return 0;
}
