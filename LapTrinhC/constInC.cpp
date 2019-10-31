#include <stdio.h>

int main(){
	int a = 10;
	const int b = 10;
	printf("ban dau a = %d, b = %d", a, b);
	
	a = 5;
	b = 5;
	printf("sau khi thay doi a = %d, b = %d", a, b);
		
	return 0;
}
