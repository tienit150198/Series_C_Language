#include "stdio.h"
int TinhThuong(int a, int b)
{
return (float)(a/b);
}
int main()
{
int a = 10 , b = 3;
float s = TinhThuong(a,b);
printf("s = %.2f", s); // in ra 3.33
}

