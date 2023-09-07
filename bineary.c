#include<stdio.h>
#include<conio.h>
#include<string.h>

void main () 
{
    int i,n,l=0,r=n-1,mid=(l+r)/2,a[i],data;
    while(l<r)
    {
        if(a[mid]=data) 
        {
            return mid;
        }
        else if (a[mid]<data)
        {
            l = mid+1;
        }
        else 
        {
            r = mid -1;
        }
    }
    return 0;
}