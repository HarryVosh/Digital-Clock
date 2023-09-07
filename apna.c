#include<stdio.h>
#include<conio.h>

 void main() {
    int choice,a,b,c;
    printf("Enter the choice. ");
    scanf("%d",&choice);
    printf("Enter the first no. = ");
    scanf("%d",&a);
    printf("Enter the second no. = ");
    scanf("%d",&b);
    
    switch(choice) {
        case 1: c=a+b;
        printf("Answer is : %d",c);
        break;
        case 2: c=a-b;
         printf("Answer is : %d",c);
        break;
        case 3: c=a*b;
        printf("Answer is : %d",c);
        break;
        case 4: if(b==0) {
            printf("No. is Invalid.");
        } else {
            printf("%d%d",a/b);
        }
        break;
        case 5: if(b==0) {
            printf("No. is Invalid.");
        } else {
            printf("%d%d",a%b);
        } 
        break;
        default : printf("Invalid Choice.");
    }
 }