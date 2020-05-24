#include<stdio.h>
int* func(int* a,int n,int m)
{
int i,j;
printf("printing in func\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d",*((a+i*n)+j));
}
printf("\n");
}
return a;
}
int main()
{
int a[3][3],sum=0;
int i,j;
int* b;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
b=func(&a,3,3);
printf("printing in main\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",*((b+i*3)+j));
}
printf("\n");
}
	for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
		{
			if(i==j)
			{
		sum=sum+*(*(a+i)+j);
	}
	}
}
	printf("the sum of diagonal elements is %d",sum);
	return 0;
}
