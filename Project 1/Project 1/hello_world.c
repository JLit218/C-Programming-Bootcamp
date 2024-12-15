#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

	/*Lesson 1: printf()
	printf("Name: Joseph Little\nAge: 28\nGender: Man");
	printf("Name: Joseph Little\n");
	printf("Age: 28\n");
	printf("Gender: Man\n");

	Lesson 2: Print Isosceles Triangle
	printf("  *\n");
	printf(" ***\n");
	printf("*****\n");
	printf("  *  \n *** \n*****");*/

	//Lesson 3: Format specification
	/*printf("I am %d years old and next year I'm going to be  %d years old \n", 28, 29);
	printf("My average grade: %.1f\n", 93.7);
	printf("We have %d coins in the bank \n", 100);
	printf("We have %f coints in the bank \n", 125.7);
	printf("Year = %d\n", 2024);
	printf("Your average grade is: %.2f\n", 95.13);
	printf("num1 = %d, num2 = %d, sum = %d\n", 5, 7, 5 + 7);
	printf("num1 = %.1f, num2 = %.1f, sum = %.1f\n", 5.2, 7.3, 5.2 + 7.3);
	printf("num1 = %d, num2 = %d, sub = %d \n", 5, 3, 5 - 3);
	printf("a = %d, b = %d, sum = a + b = %d \n", 3, 5, 3 + 5);
	printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3 + 5);
	printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3 + 5);*/

	//Lesson 4: Building a "calculator"
	//printf("%d + %d = %d \n", 5, 2, 5 + 2);

	//printf("%d - %d = %d \n", 5, 2, 5 - 2);

	//printf("%d * %d = %d \n", 5, 2, 5 * 2);

	//printf("%d / %d = %d \n", 5, 2, 5 / 2); // We take just the FULL part of the division

	//printf("%d %% %d = %d \n", 5, 2, 5 % 2); // Taking the remainder. Think about what would happen if you used just one "%".

	//Lesson 5: print rectangle
	//printf("**********\n**********\n**********\n**********\n**********\n");
	//OR
	/*printf("**********\n");
	printf("**********\n");
	printf("**********\n");
	printf("**********\n");
	printf("**********\n");*/

	/*printf("1*********\n");
	printf("12********\n");
	printf("123*******\n");
	printf("1234******\n");
	printf("12345*****\n");*/
	//OR
	//printf("1*********\n12********\n123*******\n1234******\n12345*****\n");

	//Lesson 6: print X
	/*printf("x     x\n");
	printf(" x   x\n");
	printf("  x x\n");
	printf("   x\n");
	printf("  x x\n");
	printf(" x   x\n");
	printf("x     x\n");*/
	//OR
	//printf("x     x\n x   x\n  x x\n   x\n  x x\n x   x\nx     x\n");

	//Lesson 7: print birth year
	//printf("Current year: %d, Age: %d, Birth year: %d - %d = %d\n", 2024, 28, 2024, 28, 2024 - 28);

	//Lesson 8: Variables/Data types
	/*int num1 = 1;
	int num2 = 2;

	printf("Sum: %d\n", (num1 + num2));*/

	/*int grade1;
	int grade2;

	scanf("%d", &grade1);
	scanf("%d", &grade2);

	printf("Average = %d\n", (grade1 + grade2) / 2);*/

	/*int num;
	printf("Choose your number: ");
	scanf("%d", &num);
	printf("Your number is %d \n", num);*/

	/*int currYear;
	int age;

	printf("What year is it? ");
	scanf("%d", &currYear);
	printf("\nHow old are you? ");
	scanf("%d", &age);
	printf("\nYour date of birth is: %d ", currYear - age);*/

	/*double rectHeight, rectWidth, perimeter;

	printf("Select your height: ");
	scanf("%lf", &rectHeight);
	printf("\nSelect your width: ");
	scanf("%lf", &rectWidth);
	perimeter = (rectHeight * 2) +  (rectWidth * 2);

	printf("The perimeter of the rectangle is: %.2lf", perimeter);*/

	//Lesson 8.5: Type Casting
	/*int num1 = 5, num2 = 2;
	double result;
	result = num1 / (double) num2;
	printf("result = %.2lf \n", result);*/
	
	/*int grade1, grade2, grade3;
	double avg;

	printf("Enter grade 1: ");
	scanf("%d", &grade1);
	printf("Enter grade 2: ");
	scanf("%d", &grade2);
	printf("Enter grade 3: ");
	scanf("%d", &grade3);

	avg = (grade1 + grade2 + grade3) / 3.0;

	printf("The average is: %.2lf \n", avg);*/


	//F = C * 1.8 + 32;
	//C = (F - 32) / 1.8
	//double celcius;
	//double fahrenheit;

	///*printf("What's the temperature in Celcius? ");
	//scanf("%lf", &celcius);
	//fahrenheit = celcius * 1.8 + 32;

	//printf("%.2lf degrees celcius is %.2lf degrees fahrenheit. \n", celcius, fahrenheit);*/

	//printf("What's the temperature in Fahrenheit? ");
	//scanf("%lf", &fahrenheit);
	//celcius = (fahrenheit - 32) / 1.8;

	//printf("%.2lf degrees fahrenheit is %.2lf degrees celcius. \n", fahrenheit, celcius);

int main()
{

	//Lesson 9: SWAP
	/*double a = 10.00;
	double b = 20.00;
	double temp;

	printf("a = %.2lf \n", a);
	printf("b = %.2lf \n", b);

	temp = a;
	a = b;
	b = temp;

	printf("a = %.2lf \n", a);
	printf("b = %.2lf \n", b);*/

	//Lesson 10: Arithmetic Sequences
	//Formula, nth term in sequence: An = A1 +(n - 1) * d


	
	//Formula sum of sequence: Sn = (a1 + an) * (n / 2)

	float a1, an, sn;
	int n;

	printf("Select a1: ");
	scanf("%f", &a1);
	printf("Select n: ");
	scanf("%d", &n);
	printf("Select an: ");
	scanf("%f", &an);

	sn = (a1 + an) * (n / 2.0);

	printf("Sn = %.2f", sn);
	

	return 0;
}