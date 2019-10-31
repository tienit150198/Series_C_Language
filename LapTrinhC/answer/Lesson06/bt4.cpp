#include <stdio.h>

int main()
{
	int ngay,thang, nam;
	printf("Nhap thang - nam: ");
	scanf("%d %d", &thang, &nam);
	
	switch(thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			ngay = 31;
			break;
		case 2:
			if((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
				ngay = 29;
			else
				ngay = 28;
			break;
		default:
			ngay = 30;
			break;
	}
	printf("Thang %d, nam %d co so ngay la %d", thang, nam, ngay);
	
	return 0;
}
