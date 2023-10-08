#include <stdio.h>
#include <string.h>

int main()
{
    struct Employee
    {
        char name[50];     // Employee's name (up to 50 characters).
        int age;           // Employee's age (as a whole number).
        char division[50]; // Employee's division (up to 50 characters).
        char joinDate[11]; // Employee's join date (in the format "YYYY-MM-DD").
    };

    struct Employee employee1;            // This is one employee's form.
    struct Employee employee2;            // You can create forms for multiple employees.
    struct Employee employee3, employee4; // Or you can write it like this to shorten up your code

    strcpy(employee1.name, "Yuben Bauty");             // Write the employee's name.
    employee1.age = 19;                                // Write the employee's age.
    strcpy(employee1.division, "Front-End Developer"); // Write the employee's division.
    strcpy(employee1.joinDate, "2022-07-23");          // Write the employee's join date.

    printf("Name: %s\n", employee1.name);          // Read and print the name.
    printf("Age: %d\n", employee1.age);            // Read and print the age.
    printf("Division: %s\n", employee1.division);  // Read and print the division.
    printf("Join Date: %s\n", employee1.joinDate); // Read and print the join date.

    return 0;
}
