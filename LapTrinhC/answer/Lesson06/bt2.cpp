#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	// cach 1: su dung if else
	if(a%2 == 0)
		printf("So chan");
	else
		printf("So le");
		
	// cach 2: su dung toan tu dieu kien
//	printf("so %s", (a%2 == 0 ? "chan" : "le"));
	
	
	return 0;
}
