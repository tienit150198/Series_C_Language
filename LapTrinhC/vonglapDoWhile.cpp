#include "stdio.h"
int main(){
	int number;
	do{
		scanf("%d", &number);
		printf("So vua nhap la: %d\n", number);
	}while(number != 0);
	return 0;
}
