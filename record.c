#include<stdio.h>
#include<stdlib.h>
struct managerrecord
{
    char name[20];
    int age;
    char department[20];
};
struct workerrecord
{
char name[20];
int salary;
char department[20];
};
int main()
{
    FILE *pointer1;
    FILE *pointer2;
    int i;
    pointer1 = fopen("record1.txt","wb");
    pointer2 = fopen("record2.txt","wb");
    struct managerrecord m[5]; 
    struct workerrecord w[5]; 
    for(i=0;i<5;i++)
    {
        printf("Name of %d manager \n",i+1);
        scanf("%s",m[i].name);
        fflush(stdin);
        printf("age of %d manager \n",i+1);
        scanf("%d",&m[i].age);
        printf("department of %d manager \n",i+1);
        scanf("%s",m[i].department);
        fflush(stdin);
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
       printf("Name of %d worker \n",i+1);
       scanf("%s",w[i].name);
        fflush(stdin);
        printf("department of %d worker \n",i+1);
        scanf("%s",w[i].department);
        printf("salary of %d worker \n",i+1);
        scanf("%d",&w[i].salary);
        fflush(stdin);
        printf("\n");
    }
    fwrite(m,sizeof(struct managerrecord),5,pointer1);
    fwrite(m,sizeof(struct workerrecord),5,pointer2);   
    printf("The data is stored successfully\n\n");
    printf("Let us read the data\n");
    pointer1 = fopen("record1.txt","rb");
    pointer2 = fopen("record2.txt","rb");
    fread(m,sizeof(struct managerrecord),5,pointer1);
    fread(m,sizeof(struct workerrecord),5,pointer2);  
    for(i=0;i<5;i++)
    {
        printf("Name of %d manager is %s \n",i+1,m[i].name);
        printf("age of %d manager is %d\n",i+1,m[i].age);
        printf("department of %d manager is %s \n",i+1,m[i].department);
        printf("\n");
    } 
    for(i=0;i<5;i++)
    {
        printf("Name of %d worker is %s \n",i+1,w[i].name);
        printf("department of %d worker is %s \n",i+1,w[i].department);
        printf("salary of %d worker is %d\n",i+1,w[i].salary);
        printf("\n");
    } 
return 0;
}