/*
 * main.c
 *
 *  Created on: Jul 23, 2022
 *      Author: islam
 */

/*
 * Problem 1
#include<stdio.h>
void primeNumbers(int min,int max);
char isPrime(int num);
int main(void)
{
	int min,max;
	printf("Enter two numbers (interval) : ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&min,&max);
	primeNumbers(min,max);
}
void primeNumbers(int min,int max)
{
	int i,j=0,primes[max-min];
	//a for loop to pass on each number of the range and find if it is prime or not
	for(i=min;i<=max;i++)
	{
		if(isPrime(i))
		{
			primes[j]=i;
			j++;
		}
	}

	printf("Prime numbers between %d and %d are : ",min,max);
	for(i=0;i<j;i++)
		printf("%d ",primes[i]);
}
char isPrime(int num) //char as bool is not supported in C
{
	int i;
	if(num==2)      //2 is the only even prime so if though it is prime for sure
		return 1;
	if(num%2==0)   //reaching this line means that num is not 2 but being even makes if not prime
		return 0;

	//A for loop to pass on all odd numbers till num
	for(i=3;i<num;i+=2)
	{
		if(num%i==0)
			return 0;
	}
	//it is neither 2 nor even nor divisible by any odd number then it is prime
	return 1;
}
*/

#include<stdio.h>
void main(void)
{

}