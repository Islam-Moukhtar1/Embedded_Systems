/*
 * main.c
 *
 *  Created on: Jul 11, 2022
 *      Author: islam
 */
/*
problem 1
#include<stdio.h>
#define printf __mingw_printf
int main()
{
	int x;
	printf("Enter an integer ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x%2==0)
		printf("%d is Even\n",x);
	else
		printf("%d is Odd\n",x);
	return 0;
}
*/
/*
 problem 2
 #include<stdio.h>
int main()
{
	char x;
	printf("Enter a character ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='u'||x=='i'||x=='o')
		printf("%c is vowel\n",x);
	else
		printf("%c is consonant \n",x);
	return 0;
}
 */
/*
problem 3
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter three numbers ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f%f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("%f is the greatest\n",a);
		else
			printf("%f is the greatest\n",c);
	}
	else
	{
		if(b>c)
			printf("%f is the greatest\n",b);
		else
			printf("%f is the greatest\n",c);
	}
	return 0;
}
 */
/*
 problem 4
 #include<stdio.h>
int main()
{
	float x;
	printf("Enter a number ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x==0)
		printf("%f is zero\n",x);
	else if(x<0)
		printf("%f is negative\n",x);
	else
		printf("%f is positive\n",x);
}

 */
/*
 problem 5
 #include<stdio.h>
int main()
{
	char x;
	printf("Enter a character ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	if ((x>=65&&x<=90)||(x>=97&&x<=122))
		printf("%c is an alphabet\n",x);
	else
		printf("%c is not an alphabet\n",x);
}

 */
/*
 problem 6
 #include<stdio.h>
int main()
{
	int x;
	printf("Enter n ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	int sum=(x*(x+1))/2; //series formula
	printf("sum = %d",sum);
}
 */
/*
 problem 7
#include<stdio.h>
int main()
{
	int x,fac=1;
	printf("Enter n ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	if(x<0)
		printf("You entered negative number\n");
	else
	{
		if (x==0||x==1)
			printf("%d!=1",x);
		else
		{
			for(int i=1;i<=x;i++)
				fac*=i;
			printf("%d!=%d",x,fac);
		}
	}
}
 */
/*
 problem 8
 #include<stdio.h>
int main()
{
	char operator;
	float x,y;
	printf("Enter x and y ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&x,&y);
	printf("Enter the operator (+ or - or * or /)");
	fflush(stdin);fflush(stdout);
	scanf("%c",&operator);
	switch (operator)
	{
	case '+' :
	printf("%f + %f = %f\n",x,y,x+y);
	break;
	case '-' :
	printf("%f - %f = %f\n",x,y,x-y);
	break;
	case '*' :
	printf("%f * %f = %f\n",x,y,x*y);
	break;
	case '/' :
	printf("%f / %f = %f\n",x,y,x/y);
	break;
	}
}
 */

