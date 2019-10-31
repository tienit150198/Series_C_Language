#include "stdio.h"
int main(){
	int a[100];
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	for(int i = 0 ; i < n; i++){
		printf("Nhap a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	
	for(int i = 0 ; i < n; i++){
		printf("a[%d] = %d\n",i, a[i]);
	}
	int dem = 0;
	for(int i = 0 ; i < n; i++){
		if(a[i] > 0)
			dem++;
	}
	printf("Dem = %d", dem);
	
	return 0;
}
