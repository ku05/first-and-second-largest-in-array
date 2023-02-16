#include<stdio.h>
int main()
{
    int a[5],max1,max2,i,temp;
    printf("Enter the array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max1=a[0];
    max2=a[1];
    if(max1<max2)
    {
        temp=max2;
        max2=max1;
        max1=temp;
    }
    for(i=0;i<5;i++){
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        if(a[i]<max2)
        {
            max2=a[i];
        }
    }
    printf("\n max first is %d ",max1);
    printf("\n max second is %d",max2);
}