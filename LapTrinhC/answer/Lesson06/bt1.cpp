#include <stdio.h>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	
	// thuc hien tim max
	int _max = a;
	if(_max < b)
		_max = b;
	if(_max < c)
		_max = c;
		
	printf("So lon nhat la %d", _max);
	
	
	return 0;
}
