#include <stdio.h>

int main(){
	int a, b;
	printf("Nhap a - b: ");
	scanf("%d %d", &a, &b);
	
	
	//a, tim tat ca cac uoc chung
	int _min = (a < b ? a : b);
	for(int i = 1 ; i <= _min ; i++){
		if(a % i == 0 && b % i == 0)
			printf("%-4d", i);
	}
	
	// b, tim UCLN va BCNN
	
	int tich = a * b;
	
	// tim UCLN
	// cach 1 : cham 
/*	while(a != 0 && b != 0){
		if(a > b)
			a -= b;
		else
			b -= a;
	}*/
	
	// cach 2: nhanh hon
	while(b != 0){
		unsigned tmp = a % b;
		a = b;
		b = tmp;	
	}
	
	printf("\nUCLN = %d, BCNN = %d", a, tich / (a + b));
	
	
	return 0;
}
