#include <stdio.h>
#include <string.h>

void xoaDau(char a[]){
	int n = strlen(a);
	
	int i = 0;
	while(i < n - 1){
		if(a[i] == ' '){
			int j = i;
			for(j = i; j < n - 1 ; j++){
				a[j] = a[j + 1];
			}
			a[j] = '\0';
			i--;
		}
		else
			break;
		i++;
	}
}

void xoaDuoi(char a[]){
	int n = strlen(a);
	
	int i = n - 1;
	while(i > 0){
		if(a[i] == ' '){
			a[i] = '\0';
		}
		else
			break;
		i--;
	}	
}

void xoaGiua(char a[]){
	int n = strlen(a);
	
	for(int i = 0 ; i < n - 1; i++){
		if(a[i] == ' ' && a[i + 1 ] == ' '){
			int j = i + 1;
			for(; j < n - 1 ; j++){
				a[j] = a[j + 1];
			}
			a[j] = '\0';
			i--;
		}
	}
}

int main(){
	char a[100];
	gets(a);
	
	xoaDau(a);
	xoaDuoi(a);
	xoaGiua(a);
	
	puts(a);
	
	return 0;
}
