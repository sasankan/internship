#include <stdio.h>

struct Employee {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Employee emp;

    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", emp.name);
    printf("Age: ");
    scanf("%d", &emp.age);
    printf("Salary: ");
    scanf("%f", &emp.salary);

    printf("\nEmployee details:\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);

    return 0;
}
