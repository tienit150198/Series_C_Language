#include <stdio.h>
#include <stdlib.h>
 
int main() 
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
    int *px = (int *)malloc(n * sizeof(int)); // cap phat bo nho
    for(int i = 0 ; i < n; i++){
    	printf("Nhap px[%d]: ", i);
    	scanf("%d", (px + i));
	}
	for(int i = 0 ; i < n; i++){
		printf("%d ", px[i]);
	}
	free(px);
    return 0;
}
