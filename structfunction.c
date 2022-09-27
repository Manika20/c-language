#include<stdio.h>
struct student
{
    char name[20];
    int  roll;
    float percentage;
};
int add(struct student s1)
{
    printf("\n%s",s1.name);
    printf("\n%d",s1.roll);
    printf("\n%f",s1.percentage);
}
int main()
{    
    struct student s1,s2;//s[100] n acess by a[0],a[1].....n so on.
    printf("Enter the name of student 1 :");
    scanf("%s",s1.name);
    printf("\nEnter the roll number of student 1 :");
    scanf("%d",&s1.roll);
    printf("\nEnter the percentage of student 1 :");
    scanf("%f",&s1.percentage);
    add(s1);
    return 0;
}
