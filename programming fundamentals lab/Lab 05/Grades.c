#include <stdio.h>
void main(void) 
{
    int attendance; 
    float assignmentscore; 
    float examscore; 
    float finalgrade; 
    printf("Enter attendance percentage (0-100): ");
    scanf("%d", &attendance);
	printf("Enter assignment score (0-100): ");
    scanf("%f", &assignmentscore);
	printf("Enter exam score (0-100): ");
    scanf("%f", &examscore);
	if (attendance >= 75) 
	{
        finalgrade = (assignmentscore * 0.4) + (examscore * 0.6); // Assignments: 40%, Exams: 60%
        if (finalgrade >= 90) 
		{
            printf("Final Grade: A\n");
        } 
		else if (finalgrade >= 80) 
		{
            printf("Final Grade: B\n");
        } 
		else if (finalgrade >= 70) 
		{
            printf("Final Grade: C\n");
        } 
		else if (finalgrade >= 60) 
		{
            printf("Final Grade: D\n");
        } 
		else 
		{
            printf("Final Grade: F\n");
        }
    } 
	else 
	{
        printf("Attendance is insufficient. Final Grade: F\n");
    }

}

