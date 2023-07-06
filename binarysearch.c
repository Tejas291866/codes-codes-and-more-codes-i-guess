#include<stdio.h>
#include<stdlib.h>
#define compare ((a>b)? 1:(a=b)? 0:(a<b)? -1)

int search1(int list,int key,int n )
{
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        mid=(left+right)/2;
        switch(compare(list[mid],key))
        {
            case 1:
            right=mid-1;
            break;

            case 0:
            return (mid);
            break;

            case -1:
            left=mid+1;
            break;

        }
    }return -1;
}

int search2(int list,int key,int left,int right)
{
    if (left<=right)
    {
        mid=(left+right)/2;
        switch(compare(list[mid],key))
        {
            case 1:
            return search2( list, key,left,mid-1);
            break;
            
            case 2 :
            return(mid);
            break;

            case -1:
            return search2(list,key,mid+1,right);
            break;
        }
    }return -1;

}
void main()
{
    printf("Enter the number of elements - ")
    scanf("%d",& int n);
    printf("Enter the elements of array - ");
    for(int i=0;i<n;i++)
        scanf("%d",& int list[i]);
    printf("Enter key - ");
    scanf("%d",& int key);

    int pos=search1(list,key,n);
    if (pos==-1)
    {
        printf("key not present in list -");

    }
    else
    {
        printf("Element found at %d",pos+1);
    }

}