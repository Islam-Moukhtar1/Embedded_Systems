/*
 * main.c
 *
 *  Created on: Aug 23, 2022
 *      Author: islam
 */

/*
//problem 1
#include<stdio.h>
int main(void)
{
	int m=29,*ab;
	printf("Address of m  : %p\n" ,&m);
	printf("Value of m  : %d\n" ,m);
	ab=&m;
    printf("Now ab is assigned with address of m.");
	printf("Address of pointer ab  : %p\n" ,ab);
	printf("Value of pointer ab  : %d\n" ,*ab);
	m=34;
	printf("The value of m assigned to 34 now.");
	printf("Address of pointer ab  : %p\n" ,ab);
	printf("Value of pointer ab  : %d\n" ,*ab);
	*ab=7;
	printf("Address of m  : %p\n" ,&m);
	printf("Value of m  : %d\n" ,m);
	return 0;
}
*/

/*
//problem 2
#include<stdio.h>
int main(void)
{
	char *ptr='\0',characters='A',i;
	ptr=&characters;
	do
	{
		printf("%c ",*ptr+i);
		i++;
	}while(*ptr+i<='Z');

	return 0;
}
*/

/*
//problem 3
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[100],*ptr,i;
	printf("Input a string : ");
	fflush(stdin);fflush(stdout);
	scanf("%s",str);
	ptr=&str[0]+strlen(str)-1;
	printf("Reverse of the string is : ");
	for(i=0;i<strlen(str);i++)
	{
		printf("%c",*ptr);
		ptr--;
	}printf("\n");
	return 0;
}
*/


//poblem 4
#include<stdio.h>
int main(void)
{
	int arr[15],n,i=0;
	printf("Enter the number of elements in the array (max 15) ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	while(i<n)
	{
		printf("element - %d ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
		i++;
	}i--;
	while(i>=0)
	{
		printf("element - %d %d \n",i+1,arr[i]);
		i--;
	}

	return 0;
}
