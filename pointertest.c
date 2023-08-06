#include <stdio.h>

int main() {
    double salary;
    printf("Enter your salary:\n");
    scanf("%lf", &salary);
    double* sptr = &salary;
    printf("\nYour salary:\n%lf", *sptr);
    *sptr = salary * 2;
    printf("\nYour New salary:\n%lf", *sptr);
    return 0;
}
