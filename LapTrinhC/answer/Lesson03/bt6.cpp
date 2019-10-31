#include <stdio.h>

int main(){
	int x = 295; // co the thay bang so khac.
	
	// tach so
	int donvi = x%10;
	x = x / 10;
	int chuc = x%10;
	x = x / 10;
	int tram = x;
	
	printf("%d%d%d", donvi, chuc, tram);
	
	return 0;
}
