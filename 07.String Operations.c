#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[20], str2[20];
    int ch, i, j;
    do
    {
        printf("\tMENU");
        printf("\nS....................................\n");
        printf("1:Find Length of String");
        printf("\n2:Concatenate Strings");
        printf("\n3:Copy String ");
        printf("\n4:Compare Strings");
        printf("\n5:Exit");
        printf("\n.....................................\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter String: ");
            scanf("%s", str1);
            i = strlen(str1);
            printf("Length of String : %d\n\n", i);
            break;
        case 2:
            printf("\nEnter First String: ");
            scanf("%s", str1);
            printf("Enter Second String: ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("String After Concatenation : %s\n\n", str1);
            break;
        case 3:
            printf("Enter a String1: ");
            scanf("%s", str1);
            printf("Enter a String2: ");
            scanf("%s", str2);
            printf("\nString1=\"%s\",String2=\"%s\"\n", str1, str2);
            strcpy(str2, str1);
            printf(".....................................\n");
            printf("\"We are copying string String1 to String2\"\n");
            printf(".....................................\n");
            printf("String After Copied:\nString1=\"%s\",String2=\"%s\"\n\n", str1, str2);
            break;
        case 4:
            printf("Enter First String: ");
            scanf("%s", str1);
            printf("Enter Second String: ");
            scanf("%s", str2);
            j = strcmp(str1, str2);
            if (j == 0)
            {
                printf("String are Same\n\n");
            }
            else
            {
                printf("String are not Same\n\n");
            }
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid Input. Please Enter valid Input.\n\n");
        }
    } while (ch != 5);
    return 0;
}
```[cite: 3, 5]

---

#### 2. `08.Factorial Using Recursion.c`
```c
#include <stdio.h>

int fact_rec(int num); // function declaration

int main()
{
    int num;
    int result;
    printf("Enter the number :");
    scanf("%d", &num);
    result = fact_rec(num); // function call
    printf("Result =%d \n", result);
    return 0;
}

int fact_rec(int num) // function definition
{
    if (num == 1)
        return 1;
    else
        return num * fact_rec(num - 1);
}
```[cite: 10]

---

#### 3. `09.Student Result Using Structure.c`
```c
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

---

#### 4. `10.Swap Two Numbers.c`
```c
#include <stdio.h>
// CALL BY REFERENCE / CALL BY ADDRESS

void swap_numbers(int *num1, int *num2);

int main()
{
    int num1, num2;
    printf("Enter The First Number:");
    scanf("%d", &num1);
    printf("Enter The Second Number:");
    scanf("%d", &num2);

    printf("BEFORE SWAP :: NUM1 =%d num2=%d\n", num1, num2);
    swap_numbers(&num1, &num2); // call by REFERENCE
    printf("AFTER SWAP::num1 =%d num2=%d\n", num1, num2);

    return 0;
}

void swap_numbers(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
```[cite: 2]

---

#### 5. `11.Copy File Contents.c`
```c
#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
    FILE *fptr1, *fptr2;
    char filename[100];
    int c;

    printf("Enter the filename to open for reading: ");
    scanf("%s", filename);

    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s\n", filename);
        exit(1);
    }

    printf("Enter the filename to open for writing: ");
    scanf("%s", filename);

    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s\n", filename);
        fclose(fptr1);
        exit(1);
    }

    // Read contents from file
    while ((c = fgetc(fptr1)) != EOF)
    {
        fputc(c, fptr2);
    }

    printf("Contents copied to %s\n", filename);

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
```[cite: 12, 14]

---

#### 6. `12.Calendar Preparation.c`
```c
#include <stdio.h>

int main()
{
    int year, month, daysInMonth, startingDay, dayOfWeek;
    // Input year and month
    printf("Enter a year: ");
    scanf("%d", &year);
    printf("Enter a month (1-12): ");
    scanf("%d", &month);

    // Calculate the number of days in the month
    if (month == 2)
    {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            daysInMonth = 29;
        else
            daysInMonth = 28;
    }
    else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
        daysInMonth = 30;
    else
        daysInMonth = 31;

    // Calculate the starting day of the month
    startingDay = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    for (int i = 1; i < month; i++)
    {
        if (i == 2)
        {
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                startingDay += 29;
            else
                startingDay += 28;
        }
        else if ((i == 4) || (i == 6) || (i == 9) || (i == 11))
            startingDay += 30;
        else
        {
            startingDay += 31;
        }
    }
    dayOfWeek = (startingDay + 1) % 7; // Incrementing the starting day by 1

    // Display the calendar
    printf("\n===============================\n");
    printf("%d-%02d\n", year, month);
    printf("================================\n");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");

    // Print spaces for the days before the starting day of the month
    for (int i = 0; i < dayOfWeek; i++)
    {
        printf("    ");
    }

    // Print the days of the month
    for (int day = 1; day <= daysInMonth; day++)
    {
        printf("%4d", day);

        if ((day + dayOfWeek) % 7 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
```[cite: 17, 18]

*(Optional: Once all 12 files are committed, you can also update your `README.md` if you listed the programs there.)*
