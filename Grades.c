#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    float mark, sum=0, avg;
    printf("Enter Marks obtained in 5 Subjects: ");
    for(i=0; i<5; i++)
    {
        scanf("%f", &mark);
        sum = sum+mark;
    }
    avg = sum/5;
    printf("\nGrade = ");
    if(avg>=85 && avg<=100)
        printf("A Grade");
    else if(avg>=70 && avg<84)
        printf("B Grade");
    else if(avg>=55 && avg<69)
        printf("C Grade");
    else if(avg>=40 && avg<54)
        printf("D Grade");
    else
        printf("F Grade");
    getch();
    return 0;
}
