#include<stdio.h>
#include<conio.h>
#include<string.h>

void main () 
{
    int a[10],i,max;
    for(i=1;i<=10;i++) {
        printf("Enter the value %d: ",i);
        scanf("%d",&a[i]);
    }
    max=a[1];
    for(i=1;i<=10;i++) {
        if(max<a[i]) {
            max=a[i];
        }
    }
    printf("Max value is : %d",max);
    getch();
}