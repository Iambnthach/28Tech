#include<stdio.h>
#include<conio.h>
int nhap(int &n)
{
	printf("Nhap n:");
	scanf("%d", &n);
	return n;
}
void Hinh1(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", n);
		}
		printf("\n");
	}
}
void Hinh2(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n - 1; j++)
		{

		}
	}
}
void main()
{
	int n;
	nhap(n);
	Hinh1(n);
	getch();
}