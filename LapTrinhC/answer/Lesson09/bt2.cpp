#include <stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int mu = 1;
	for(int i = 1 ; i <= n ; i++)
		mu *= 2;
		
	printf("Mu = %d", mu);
	
	return 0;
}
