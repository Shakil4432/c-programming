#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    int marks_difference;
    int highest_marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (marks[i] > highest_marks)
        {
            highest_marks = marks[i];
        }
    }
    int i = 0;
    while (i < n)
    {
        marks_difference = highest_marks - marks[i];
        printf("%d ", marks_difference);
        i++;
    }

    return 0;
}