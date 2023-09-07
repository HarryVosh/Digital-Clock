#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
    char name[15];
    int age;
    float salary;
} std[5];

void main ()
{
    int i;
    for(i=0;i<=4;i++)
    {
        gets(std[i].name);
        scanf("age is :%d",&std[i].age);
        scanf("salary is :%f",&std[i].salary);
    }
    for(i=0;i<=4;i++)
    {
        if(std[i].salary>2000)
        {
            puts(std[i].name);
        }
    }
}