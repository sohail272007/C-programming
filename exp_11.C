#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};int main() {
    FILE *fp;
    struct Employee emp;
    int choice;

    while (1) {
        printf("\n===== Employee Database Menu =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
   switch (choice) {
            case 1:
                fp = fopen("employee.dat", "ab"); 
                if (fp == NULL) {
                    printf("Error opening file!\n");
                    exit(1);
                }
                printf("Enter Employee ID: ");
                scanf("%d", &emp.id);
                printf("Enter Employee Name: ");
                scanf(" %[^\n]s", emp.name);  
                printf("Enter Employee Salary: ");
                scanf("%f", &emp.salary);
                 fwrite(&emp, sizeof(emp), 1, fp);  
                fclose(fp);
                printf("Employee added successfully!\n");
                break;
            case 2:
                fp = fopen("employee.dat", "rb"); 
                if (fp == NULL) {
                    printf("No employee data found!\n");
                    break;
                }  printf("\n===== Employee Records =====\n");
                while (fread(&emp, sizeof(emp), 1, fp)) {
                    printf("ID: %d, Name: %s, Salary: %.2f\n", emp.id, emp.name, emp.salary);
                }
                fclose(fp);
                break;
 case 3:   printf("Exiting...\n");
                exit(0);
                default:
                printf("Invalid choice! Please try again.\n");
        } } return 0;
}
