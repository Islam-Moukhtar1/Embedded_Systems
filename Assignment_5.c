/*
 * main.c
 *
 *  Created on: Aug 5, 2022
 *      Author: islam
 */
/*
 //problem 1
#include<stdio.h>
struct Sstudent
{
	char name[100];
	int roll;
	float marks;
};
int main(void)
{
	struct Sstudent test_student ;
	printf("Enter information of student\n\n");
	fflush(stdin);fflush(stdout);
	printf("Enter name ");\
	fflush(stdin);fflush(stdout);
	gets(test_student.name);
	printf("Enter roll number ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&test_student.roll);
	printf("Enter mark ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&test_student.marks);
	printf("Displaying information\n\n");
	printf("Name : %s \n",test_student.name);
	printf("Roll : %d \n",test_student.roll);
	printf("Marks : %f \n",test_student.marks);
	return 0;
}*/
/*
  //problem 2
#include<stdio.h>
struct SDistance
{
	int feet;
	float inch;
};
int main(void)
{
	struct SDistance distances[3];
	printf("Enter information of 1st distance\n\n");
	fflush(stdin);fflush(stdout);
	printf("Feet : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&distances[0].feet);
	printf("Inch : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&distances[0].inch);
	printf("Enter information of 2nd distance\n\n");
	fflush(stdin);fflush(stdout);
	printf("Feet : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&distances[1].feet);
	printf("Inch : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&distances[1].inch);
	if(distances[0].inch+distances[1].inch>=12.000)
	{
		distances[3].feet=distances[0].feet+distances[1].feet+1;
		distances[3].inch=distances[0].inch+distances[1].inch-12;
	}
	else
	{
		distances[3].feet=distances[0].feet+distances[1].feet;
		distances[3].inch=distances[0].inch+distances[1].inch;
	}
	printf("Sum of distances = %d' -  %.3f\"\n",distances[3].feet,distances[3].inch);
	return 0;
}*/
/*
 //Problem 3
#include<stdio.h>
struct SComplex
{
	float real;
	float img;
};
int main(void)
{
	struct SComplex numbers[3];
	printf("For 1st complex\n\n");
	fflush(stdin);fflush(stdout);
	printf("Enter real and imaginary parts in the form (real, imaginary) ");
	fflush(stdin);fflush(stdout);
	scanf("(%f, %f)",&numbers[0].real,&numbers[0].img);
	printf("For 2nd complex\n\n");
	fflush(stdin);fflush(stdout);
	printf("Enter real and imaginary parts in the form (real,imaginary) ");
	fflush(stdin);fflush(stdout);
	scanf("(%f, %f)",&numbers[1].real,&numbers[1].img);
	numbers[2].real=numbers[0].real+numbers[1].real;
	numbers[2].img=numbers[0].img+numbers[1].img;
	printf("Sum is %f + %f i",numbers[2].real,numbers[2].img);
	return 0;
}*/
/*
 //Problem 4
#include<stdio.h>
struct Sstudent
{
	int roll;
	char name[100];
	float mark;
};
int main()
{
	struct Sstudent students[10];
	int i;
	printf("Enter information of students:");
	fflush(stdin);fflush(stdout);
	for(i=0;i<10;i++)
	{
		printf("\n\nFor roll number %d\n",i+1);
		fflush(stdin);fflush(stdout);
		printf("Enter the name ");
		fflush(stdin);fflush(stdout);
		gets(students[i].name);
		printf("Enter the mark ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&students[i].mark);
	}
	printf("Displaying information of students:");
	fflush(stdin);fflush(stdout);
	for(i=0;i<10;i++)
	{
		printf("\n\nInformation For roll number %d\n",i+1);
		printf("Name : %s \n",students[i].name);
		printf("Mark : %f \n",students[i].mark);
	}
	return 0;
}
*/
/*
 //problem 5
#include<stdio.h>
int main(void)
{





	return 0;
}
 */
//problem 6 union >>>> 32 bytes ,,,, structure >>>>>>>>>> 40 bytes
/*
 //check
#include<stdio.h>
union job
{
	char name[32];
	float salary;
	int worker_no;
}u;
struct Sjob
{
	char name[32];
	float salary;
	int worker_no;
}s;
int main(void)
{
	printf("\n size of union = %d",sizeof(u));
	printf("\n size of structure = %d",sizeof(s));
	return 0;
}*/

