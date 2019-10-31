#include <stdio.h>
#include <string.h>

bool compare(char a[]){
	int size = strlen(a);	// lay do dai cua chuoi a
	char b[size];
	
	strcpy(b,a);	// copy du lieu tu chuoi a -> chuoi b.
	
	strrev(b);	// dao nguoc xau b.
	
	// strcmp la ham so sanh, neu 2 chuoi bang nhau -> tra ve 0.
	return strcmp(a,b) == 0;
}

bool compare1(char a[]){
	
	bool flag = true;
	int n = strlen(a);
	for(int i = 0 ; i < n / 2; i++){
		if(a[i] != a[n - i - 1]){
			flag = false;
			break;
		}
	}
	
	return flag;

}

int main(){
	
	char a[100];
	gets(a);
	
	// kiem tra doi xung su dung ham
	if(compare(a)){
		printf("Doi xung");
	}else{
		printf("Khong doi xung");
	}
	
	return 0;
}
