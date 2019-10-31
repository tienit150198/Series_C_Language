#include <stdio.h>
int main(){
	/*int a = 3, b = 2;
	printf("%d",a%b);*/
	int a = 3, b = 2;
	a++;
	b--;
	printf("tang lan 1: a = %d, b = %d\n", a, b);
	
	printf("tang lan 2: a = %d, b = %d", a++, ++b);
	return 0;
}
