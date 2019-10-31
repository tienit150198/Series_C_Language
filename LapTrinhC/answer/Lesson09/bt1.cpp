#include <stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	// cach 1: su dung for
	int tong = 0;
	for(int i = 3 ; i <= n ; i++)
		tong += i;
		
	printf("tong = %d\n", tong);
	
	// cach 2: su dung while
	tong = 0;
	int i = 3;
	while(i <= n){
		tong += i;
		i++;
	}
	
	printf("tong = %d\n", tong);
	
	// cach 3: su dung do...while
	i = 3;
	tong = 0;
	do{
		tong += i;
		i++;
	}while(i <= n);	// co the bi sai neu n < 3
	
	printf("tong = %d\n", tong);
	
	return 0;
}
