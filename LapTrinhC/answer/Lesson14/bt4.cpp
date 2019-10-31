#include <stdio.h>
#include <string.h>

void tachTen(char a[]){
	char ho[30], chulot[30], ten[30];
	int sizeHo = 0, sizeLot = 0, sizeTen = 0;
	
	int n = strlen(a);

	int i = n - 1;
	while(a[i] != ' '){
		ten[sizeTen++] = a[i--];
	}
	ten[sizeTen] = '\0';
	strrev(ten);

	printf("Ten = %s", ten);
}

int main(){
	char a[100];
	gets(a);
	
	tachTen(a);
	
	return 0;
}
