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
