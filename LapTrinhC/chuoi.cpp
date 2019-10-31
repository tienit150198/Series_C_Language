#include "stdio.h"
#include "string.h"
int main(){
	char s[100];
	printf("Nhap chuoi: ");
	gets(s);
	
	for(int i = 0 ; s[i] ; i++){
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	}
	printf("Chuoi da duoc chuyen: %s",s);
	return 0;
}
