#include<stdio.h>
int main(void)
{
    int i,j,n,temp,swapped,a[10];
    printf("\n\nEnter the total elements of the array:");
    scanf("%d",&n);
    printf("\n\nEnter the elements in the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        swapped =0;
        for(j=0;j<n-i-1;j++)
        {

            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped == 0)
            break;
    }

    printf("\nThe Sorted Array is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
