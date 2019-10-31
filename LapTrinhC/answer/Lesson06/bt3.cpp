#include <stdio.h>
#include <math.h> // ham sqrt -> lay can bac 2
int main()
{
	float a, b, c;
	float delta, x1, x2;
	printf("Giai phuong trinh bac 2\n");
	scanf("%f %f %f", &a, &b, &c);	// nhap a, b, c
	// chung ta khong xet truong hop khong phai phuong trinh bac 2 ( a == 0 )
	if (a==0)
		printf("Phuong trinh sai");
	else
	{
		delta=b*b-4*a*c ;
		if (delta<0)
			printf("Phuong trinh vo nghiem");
		if (delta==0)
		{
			x1=-b/(2*a);
			printf("Phuong trinh da nghiem kep:%f",x1);
		}
		if (delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet\n");
			printf("x1 = %f\n",x1);
			printf("x2 = %f",x2);
		}
	}
	
	return 0;
}
