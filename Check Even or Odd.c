1. Sum, Subtraction, Division and Remainder
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Division = %d\n", a / b);
    printf("Remainder = %d\n", a % b);

    return 0;
}
7. Largest Number Among Three Numbers
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Largest = %d", a);
    else if (b >= a && b >= c)
        printf("Largest = %d", b);
    else
        printf("Largest = %d", c);

    return 0;
}
8. Swap Two Numbers Without Using Third Variable
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
9. Check Positive, Negative or Zero
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Positive");
    else if (n < 0)
        printf("Negative");
    else
        printf("Zero");

    return 0;
}
10. Check Even or Odd
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
11. Check Leap Year
#include <stdio.h>

int main() {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}
18. Sum of the Series 1 + 2 + 3 + ... + n
#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}



1. C Program to Check Vowel or Consonant


#include <stdio.h>

int main()
{
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("%c is a Vowel.", ch);
    }
    else
    {
        printf("%c is a Consonant.", ch);
    }

    return 0;
}

2. C Program to Convert Days into Years, Weeks, and Days

#include <stdio.h>

int main()
{
    int days, years, weeks, remainingDays;

    printf("Enter total days: ");
    scanf("%d", &days);

    years = days / 365;
    days = days % 365;

    weeks = days / 7;
    remainingDays = days % 7;

    printf("Years = %d\n", years);
    printf("Weeks = %d\n", weeks);
    printf("Days = %d\n", remainingDays);

    return 0;
}

3. C Program to Print from 1 to 5
#include <stdio.h>

int main()
{
    int i;

    for(i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
    

3. C Program to Print from 5 to 1

  #include <stdio.h>

int main()
{
    int i;

    for(i = 5; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}  



all ashe aikane 

1. Read Two Integers and Display Sum, Sub, Div, and RemainderC#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum = %d\n", num1 + num2);
    printf("Subtraction = %d\n", num1 - num2);
    
    if (num2 != 0) {
        printf("Division = %.2f\n", (float)num1 / num2);
        printf("Remainder = %d\n", num1 % num2);
    } else {
        printf("Division and Remainder by zero are not allowed.\n");
    }

    return 0;
}
2. Read Radius of a Circle and Display AreaC#include <stdio.h>

int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14159 * radius * radius;
    printf("Area of the circle = %.2f\n", area);

    return 0;
}
3. Convert Days to Years, Weeks, and DaysC#include <stdio.h>

int main() {
    int total_days, years, weeks, days;
    printf("Enter total days: ");
    scanf("%d", &total_days);

    years = total_days / 365;
    weeks = (total_days % 365) / 7;
    days = (total_days % 365) % 7;

    printf("%d days = %d Year(s), %d Week(s), and %d Day(s)\n", total_days, years, weeks, days);

    return 0;
}
4. Demonstrate the Use of Increment/Decrement OperatorC#include <stdio.h>

int main() {
    int a = 10, b = 10;

    printf("Initial values: a = %d, b = %d\n", a, b);
    printf("Post-increment (a++): %d\n", a++);
    printf("Value after post-increment: %d\n", a);

    printf("Pre-increment (++b): %d\n", ++b);
    
    printf("Post-decrement (a--): %d\n", a--);
    printf("Pre-decrement (--b): %d\n", --b);

    return 0;
}
5. Demonstrate the Use of Bitwise AND OperatorC#include <stdio.h>

int main() {
    int a = 12; // Binary: 1100
    int b = 25; // Binary: 11001
    
    // 01100 & 11001 = 01000 (Decimal 8)
    printf("Bitwise AND of %d and %d is: %d\n", a, b, a & b);

    return 0;
}
6. Demonstrate the Use of Comparison OperatorC#include <stdio.h>

int main() {
    int x = 15, y = 20;

    printf("x = %d, y = %d\n", x, y);
    printf("x > y : %d\n", x > y);   // Returns 0 (False)
    printf("x < y : %d\n", x < y);   // Returns 1 (True)
    printf("x == y: %d\n", x == y);  // Returns 0 (False)
    printf("x != y: %d\n", x != y);  // Returns 1 (True)

    return 0;
}
Conditionals & Decisions (7 - 16)7. Find the Largest Number Among Three NumbersC#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%d is the largest number.\n", n1);
    else if (n2 >= n1 && n2 >= n3)
        printf("%d is the largest number.\n", n2);
    else
        printf("%d is the largest number.\n", n3);

    return 0;
}
8. Swap Two Numbers Without Using a Third VariableC#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
9. Check Whether a Number is Positive, Negative, or ZeroC#include <stdio.h>

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num > 0)
        printf("The number is Positive.\n");
    else if (num < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Zero.\n");

    return 0;
}
10. Check Whether a Number is Even or OddC#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);

    return 0;
}
11. Check Leap Year or NotC#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is not a Leap Year.\n", year);
    }

    return 0;
}
12. Check Vowel or ConsonantC#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet character: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("%c is a Vowel.\n", ch);
        } else {
            printf("%c is a Consonant.\n", ch);
        }
    } else {
        printf("Not a valid alphabet character.\n");
    }

    return 0;
}
13. Check Alphabet, Digit, or Special CharacterC#include <stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an Alphabet.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a Digit.\n", ch);
    } else {
        printf("%c is a Special Character.\n", ch);
    }

    return 0;
}
14. Check Uppercase or LowercaseC#include <stdio.h>

int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an Uppercase alphabet.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a Lowercase alphabet.\n", ch);
    } else {
        printf("Not an alphabet character.\n");
    }

    return 0;
}
15. Calculate Percentage and GradeC#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer; 
    float percentage;

    printf("Enter marks of five subjects (out of 100):\n");
    scanf("%f %f %f %f %f", &physics, &chemistry, &biology, &mathematics, &computer);

    percentage = (physics + chemistry + biology + mathematics + computer) / 5.0;

    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 90) printf("Grade A\n");
    else if (percentage >= 80) printf("Grade B\n");
    else if (percentage >= 70) printf("Grade C\n");
    else if (percentage >= 60) printf("Grade D\n");
    else if (percentage >= 40) printf("Grade E\n");
    else printf("Grade F\n");

    return 0;
}
16. Calculate Gross SalaryC#include <stdio.h>

int main() {
    float basic_salary, gross_salary, hra, da;
    printf("Enter basic salary of the employee: ");
    scanf("%f", &basic_salary);

    if (basic_salary <= 10000) {
        hra = basic_salary * 0.20;
        da = basic_salary * 0.80;
    } else if (basic_salary <= 20000) {
        hra = basic_salary * 0.25;
        da = basic_salary * 0.90;
    } else {
        hra = basic_salary * 0.30;
        da = basic_salary * 0.95;
    }

    gross_salary = basic_salary + hra + da;
    printf("Gross Salary = %.2f\n", gross_salary);

    return 0;
}
Loops & Math Logic (17 - 20)17. Print Numbers from 1 to 5C#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
18. Print the Summation of the Series: $1 + 2 + 3 + 4 + \dots + n$C#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of the series up to %d = %d\n", n, sum);
    return 0;
}
19. Sum of DigitsC#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        temp = temp / 10;
    }

    printf("Sum of digits of %d = %d\n", num, sum);
    return 0;
}
20. Check if a Number is an Armstrong Number or NotC#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Calculate the power sum of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
