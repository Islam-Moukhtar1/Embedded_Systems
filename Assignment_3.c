/*
 * main.c
 *
 *  Created on: Jul 16, 2022
 *      Author: islam
 */



/***************************************Arrays homework**********************/

/*
 * problem 1
#include<stdio.h>
int main()
{
	int i,j;
	float a[2][2],b[2][2],s[2][2];
	printf("Enter the elements of the 1st matrix\n");
	fflush(stdin);fflush(stdout);
	for( i=0;i<2;i++)
	{
		for( j=0;j<2;j++)
		{
			printf("Enter a%d%d ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of the 2nd matrix\n");
	fflush(stdin);fflush(stdout);
	for( i=0;i<2;i++)
	{
		for( j=0;j<2;j++)
		{
			printf("Enter b%d%d ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}
	for( i=0;i<2;i++)
	{
		for( j=0;j<2;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%.1f ",s[i][j]);
		}printf("\n");
	}
}
*/
/*
 * problem 2
#include<stdio.h>
int main()
{
	float arr[100],sum=0,avg;
	int n,i;
	printf("Enter the number of data ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d . Enter number : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/n;
	printf("Average = %.2f ",avg);
}
*/
/*
 * priblem 3
#include<stdio.h>
int main()
{
	int r,c,i,j;
	int arr[100][100],tr[100][100];
	printf("Enter number of rows and columns ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&r,&c);
	printf("Enter elements of matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element a%d%d ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Entered matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}printf("\n");
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			tr[i][j]=arr[j][i];
		}
	}
	printf("Transpose of matrix :\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",tr[i][j]);
		}printf("\n");
	}
}
*/
/*
 * problem 4
#include<stdio.h>
int main()
{
	int arr[100],n,i,ins,insl,newarr[100];
	printf("Enter the number of elements ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		arr[i]=i+1;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	printf("Enter the element to be inserted ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&ins);
	printf("Enter the location ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&insl);
	for(i=0;i<=n;i++)
		i==(insl-1)? newarr[i]=ins:i<(insl-1)? (newarr[i]=arr[i]):(newarr[i]=arr[i-1]) ;
	for(i=0;i<n+1;i++)
		printf("%d ",newarr[i]);
}
*/
/*
 * problem 5
#include<stdio.h>
int main()
{
	int arr[100],n,i,search;
	printf("Enter no. of elements ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
		arr[i]=(i+1)*11;
	for(i=0;i<n;i++)
		printf("%d%d ",i+1,i+1);
	printf("\n");
	printf("Enter the element to be searched ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&search);
	for(i=0;i<n;i++)
		arr[i]==search? printf("Number found at location %d\n",i+1):0 ;
}
*/


