#include <stdio.h>
#include <string.h>	// strlen

int main(){
	char a[100];
//	scanf("%s", &a);	// nhap chuoi khong co khoang trang
	gets(a); // nhap chuoi co khoang trang
	
	for(int i = 0 ; i < strlen(a) ; i++){	// duyet su dung strlen : lay do dai
		if(a[i] >= 'a' && a[i] <='z')
			a[i] -= 32;		// chuyen chu thuong thanh chu hoa
	}
	
	
/*	for(int i = 0 ; a[i] ; i++){	// duyet binh thuong
		if(a[i] >= 'a' && a[i] <='z')
			a[i] -= 32;		// chuyen chu thuong thanh chu hoa
	}*/
	
	
	
	puts(a);
	
	return 0;
}
