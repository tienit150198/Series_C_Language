#include "stdio.h"
int main(){
	int i = 1;
	while(i <= 30){
		i++;
		if(i % 2 == 1)
			continue;
		printf("i = %d\n", i);
	}
	return 0;
}
