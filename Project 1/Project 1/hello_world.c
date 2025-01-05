
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

	/*float a1, an, sn;
	int n;

	printf("Select a1: ");
	scanf("%f", &a1);
	printf("Select an: ");
	scanf("%f", &an);
	printf("Select n: ");
	scanf("%d", &n);

	sn = (a1 + an) * n / 2;

	printf("Sn = %.2f", sn);
	*/

	//Calculate monthly salary

	/*float salaryPerHour, hoursWorked, monthlyWage;

	printf("Enter your hourly wage: ");
	scanf("%f", &salaryPerHour);
	printf("Enter your hours worked: ");
	scanf("%f", &hoursWorked);

	monthlyWage = salaryPerHour * hoursWorked;

	printf("Your wage for this month is: $%.2f", monthlyWage);*/

	//float speedInMinutes;

	//int hours, min, distance, speed;

	////time = distance / speed 

	//printf("Enter distance (km): ");
	//scanf("%d", &distance);
	//printf("Enter km/h: ");
	//scanf("%d", &speed);

	//hours = distance / speed;
	//speedInMinutes = speed / 60.0;

	//min = (distance % speed) / speedInMinutes;

	//printf("You will arrive in %d hours and %d minutes", hours, min);

	/*int seconds, hour, minutes,sec;
	int secondsInHour = 3600;
	int secondsInMin = 60;
	
	printf("Enter seconds: ");
	scanf("%d", &seconds);

	hour = seconds / secondsInHour;
	int secondsRemaining = seconds - (hour * secondsInHour);
	minutes = (secondsRemaining) / secondsInMin;
	seconds = (secondsRemaining) % secondsInMin;

	printf("Hours: %d\nMinutes: %d\nSeconds: %d", hour, minutes, seconds);*/

	/*float data;
	printf("Enter decimal: ");
	scanf("%f", &data);
	
	float extractData = data - (int)data;
	printf("%.2f", extractData);*/

	/*int num, units, tens, hundreds, sum;

	printf("Enter 3 digit number: ");
	scanf("%d", &num);

	units = num % 10;
	tens = (num / 10) % 10;
	hundreds = num / 100;
	sum = units + tens + hundreds;

	printf("The total sum of digits in %d is %d\n", num, sum);*/


	/*int num;
	int reverseNums;
	int ones, tens, hundreds;

	printf("Enter 3 digit number: ");
	scanf("%d", &num);

	ones = num % 10;
	tens = (num / 10) % 10;
	hundreds = num / 100;

	reverseNums = ones;
	reverseNums = reverseNums * 10 + tens;
	reverseNums = reverseNums * 10 + hundreds;

	printf("Reverse number of %d: %d", num, reverseNums);*/

	// distance between two points:
	// sqrt[(x1-x2)^2 + (y1-y2)^2]

	/*float x1, y1, x2, y2;
	float distance;

	printf("Enter X1: ");
	scanf("%f", &x1);

	printf("Enter Y1: ");
	scanf("%f", &y1);

	printf("Enter X2: ");
	scanf("%f", &x2);

	printf("Enter Y2: ");
	scanf("%f", &y2);

	distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

	printf("The distance between the points  (%.2f,%.2f) and (%.2f,%.2f) is: %.2f",x1, y1, x2, y2, distance);*/

	/*int x, pow2, pow4, pow6, pow8;

	printf("Enter X: ");
	scanf("%d", &x);

	pow2 = x * x;
	pow4 = pow2 * pow2;
	pow6 = pow2 * pow4;
	pow8 = pow4 * pow4;

	printf("1. X^2 = %d\n2. X^4 = %d\n3. X^6 = %d\n4. X^8 = %d", pow2, pow4, pow6, pow8);*/


	//Conditionals and Control Flow
	/*int grade;

	printf("Enter your grade: ");
	scanf("%d", &grade);

	if (grade >= 60)
	{
		printf("Congratulations!");
	}
	else {
		printf("Failed. Try Again..");
	}*/

	/*int num1, num2;

	printf("Enter num1 and num2: ");
	scanf("%d%d", &num1, &num2);

	if (num1 == num2)
		printf("%d is equal to %d", num1, num2);
	else if(num1 > num2)
		printf("%d is greater than %d", num1, num2);
	else
		printf("%d is greater than %d", num2, num1);*/

	//int input, result;

	/*printf("Enter your number:");
	scanf("%d", &input);
	
	result = input % 2;

	if (result == 1)
		printf("%d is an odd number.", input);
	else
		printf("%d is an even number.", input);*/

	/*char grade;

	printf("Enter your grade (A-F): ");
	scanf("%c", &grade);

	switch (grade)
	{
	case 'A':
		printf("Grade between 90-100. \n");
		break;
	case 'B':
		printf("Grade between 80-90. \n");
		break;
	case 'C':
		printf("Grade between 70-80. \n");
		break;
	case 'D':
		printf("Grade between 60-70. \n");
		break;
	case 'F':
		printf("Grade is less than 60. \n");
		break;
	default:
		printf("Error, try again");
		break;
	}*/

	/*int num1, num2;
	char operator;

	printf("Select your operation (+, -, *, /, %c): ", 37);
	scanf("%c", &operator);

	printf("Select your numbers: ");
	scanf("%d%d", &num1, &num2);


	switch (operator)
	{
	case '+':
		printf("%d + %d = %d", num1, num2, num1 + num2);
		break;
	case '-':
		printf("%d - %d = %d", num1, num2, num1 - num2);
		break;
	case '*':
		printf("%d * %d = %d", num1, num2, num1 * num2);
		break;
	case '/':
		if (num2 == 0)
		{
			printf("Cannot divide by 0, try again");
		}
		else
		{
			printf("%d * %d = %d", num1, num2, num1 / num2);

		}
		break;
	case '%':
		if (num2 == 0)
		{
			printf("Cannot divide by 0, try again");
		}
		else
		{
			printf("%d % %d = %d", num1, num2, num1 % num2);

		}
		break;
	default:
		printf("Invalid inputs, please try again.");
		break;
	}*/
	////Ternary Operator
	//int num1, num2, min;

	//printf("Enter two numbers: ");
	//scanf("%d%d", &num1, &num2);

	//min = (num1 > num2) ? num2 : num1;

	//printf("MINIMUM = %d ", min);

	/*int num;
	int ones, tens, hundreds;

	printf("Enter three digit number: ");
	scanf("%d", &num);

	if (num > 999 || num < 100)
		printf("Invalid input, please select a three digit number");
	else {
		ones = num % 10;
		tens = (num / 10) % 10;
		hundreds = num / 100;

		int first, second, third;

		if (ones > tens && ones > hundreds) 
		{
			third = ones;
			if (tens > hundreds)
			{
				second = tens;
				first = hundreds;
			}
			else {
				second = hundreds;
				first = tens;
			}
		}
		else if (tens > ones && tens > hundreds) 
		{
			third = tens;
			if (ones > hundreds)
			{
				second = ones;
				first = hundreds;
			}
			else {
				second = hundreds;
				first = ones;
			}
		}
		else {
			third = hundreds;
			if (ones > tens)
			{
				second = ones;
				first = tens;
			}
			else {
				second = tens;
				first = ones;
			}
		}

		printf("Ascending: %d%d%d", first, second, third);
	}*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	/*int num;

	printf("Enter number: ");
	scanf("%d", &num);

	if (num > 0)
		printf("1");
	else if (num == 0)
		printf("0");
	else
		printf("-1");*/

	/*int num;

	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num == 0)
	{
		printf("0");
		return 0;
	}

	(num > 0) ? printf("Absolute Value = %d", num) : printf("Absolute Value = %d", num * -1);*/

	//int seconds, hours, minutes,sec;
	//int secondsInHour = 3600;
	//int secondsInMin = 60;

	//printf("Enter seconds: ");
	//scanf("%d", &seconds);

	//hours = seconds / secondsInHour;
	//int secondsRemaining = seconds - (hours * secondsInHour);
	//minutes = (secondsRemaining) / secondsInMin;
	//seconds = (secondsRemaining) % secondsInMin;

	//if (hours < 10)
	//	printf("0");
	//printf("%d : ", hours);
	//if (minutes < 10)
	//	printf("0");
	//printf("%d : ", minutes);
	//if (seconds < 10)
	//	printf("0");
	//printf("%d", seconds);

	/*int year;

	printf("Enter year: ");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				printf("%d is a leap year", year);
			}
			else {
				printf("%d is not a leap year", year);
			}
		}
		else {
			printf("%d is a leap year", year);
		}
	}
	else {
		printf("%d is not a leap year", year);
	}*/


	return 0;
}