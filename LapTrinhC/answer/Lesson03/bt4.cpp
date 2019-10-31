#include <stdio.h>

int main(){
	int a = 5, b = 7;
	
	// thuc hien hoan vi
	int hoanvi = a;
	a = b;
	b = hoanvi;
	
	// ket thuc hoan vi
	
	printf ("a = %d \n", a);
	printf ("b = %d", b);
	
	return 0;
}
