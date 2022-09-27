#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int  roll;
    float percentage;
};
int main()
{    
    struct student s1;
    printf("Enter the name of student 1 :");
    scanf("%s",s1.name);
    printf("\nEnter the roll number of student 1 :");
    scanf("%d",&s1.roll);
    printf("\nEnter the percentage of student 1 :");
    scanf("%f",&s1.percentage);
    printf("\n%s",s1.name);
    printf("\n%d",s1.roll);
    printf("\n%f",s1.percentage);
    struct student s2;
    printf("Enter the name of student 1 :");
    scanf("%s",s2.name);
    printf("\nEnter the roll number of student 1 :");
    scanf("%d",&s2.roll);
    printf("\nEnter the percentage of student 1 :");
    scanf("%f",&s2.percentage);
    printf("\n%s",s2.name);
    printf("\n%d",s2.roll);
    printf("\n%f",s2.percentage);
    struct student s3;
    strcpy(s3.name,"manika");// if we wanna get such input of tring than use copy
    s3.roll = 34;
    s3.percentage = 100;
    printf("\n%s",s3.name);
    printf("\n%d",s3.roll);
    printf("\n%f",s3.percentage);
    return 0;
}
