#include<stdio.h>
#include<conio.h>
void main()
 {
    int a[5][5],i,j,sum=0;
    for(i=0;i<=4;i++) {
        for(j=0;j<=4;j++) {
            printf("Enter the value : ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=4;i++) {
        for(j=0;j<=4;j++) {
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
 }            