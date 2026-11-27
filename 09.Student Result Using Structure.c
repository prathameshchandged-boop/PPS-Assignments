#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    char branch[30];
    float marks[5];
    float total;
    float percentage;
    char grade[20];
};

int main()
{
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Accept Student Information
    for (i = 0; i < n; i++)
    {
        printf("\n--- Enter Details for Student %d ---\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter Branch: ");
        scanf(" %[^\n]", s[i].branch);

        s[i].total = 0;
        for (j = 0; j < 5; j++)
        {
            printf("Enter Marks %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        s[i].percentage = (s[i].total / 500.0) * 100.0;

        if (s[i].percentage >= 75.0)
            sprintf(s[i].grade, "Distinction");
        else if (s[i].percentage >= 60.0)
            sprintf(s[i].grade, "First Class");
        else if (s[i].percentage >= 50.0)
            sprintf(s[i].grade, "Second Class");
        else if (s[i].percentage >= 40.0)
            sprintf(s[i].grade, "Pass");
        else
            sprintf(s[i].grade, "Fail");
    }

    // Display Student Information
    printf("\n================ STUDENT RESULTS ================\n");
    for (i = 0; i < n; i++)
    {
        printf("\nRoll Number : %d\n", s[i].roll_no);
        printf("Name        : %s\n", s[i].name);
        printf("Branch      : %s\n", s[i].branch);
        printf("Marks       : %.1f, %.1f, %.1f, %.1f, %.1f\n",
               s[i].marks[0], s[i].marks[1], s[i].marks[2], s[i].marks[3], s[i].marks[4]);
        printf("Total Marks : %.2f / 500\n", s[i].total);
        printf("Percentage  : %.2f%%\n", s[i].percentage);
        printf("Class       : %s\n", s[i].grade);
    }

    return 0;
}
```[cite: 24, 27, 28]
