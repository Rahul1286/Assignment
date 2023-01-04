#include <stdio.h>

int main(void)
{
    int marks[5];
    int sum = 0;

    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    float average = (float) sum / 5;
    if (average >= 60)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}

/*This program prompts the user to enter marks for 5 subjects, and then stores the marks in an array called marks. It calculates the sum of the marks and stores it in the sum variable. It then calculates the average of the marks by dividing the sum by 5, and stores the result in a variable called average. Finally, it uses an if statement to check whether the average is greater than or equal to 60. If it is, it prints a message indicating that the student has passed. If it is not, it prints a message indicating that the student has failed.*/