#include <stdio.h>
#include<stdlib.h>
double power(double, int);
void main(void)
{
	int k; double ans;
	printf("�p��3.5���誺k����=?�п�Jk=");
	scanf_s("%d", &k); ans = power(3.5, k);
	printf("3.5��%d���謰%f\n", k, ans);
	system("pause");
}
double  power(double x, int n)
{
	int i; double powerxn=1;
	for (i = 0;i < n; i++)
		powerxn = powerxn * x;
	return powerxn;



}