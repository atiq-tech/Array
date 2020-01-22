#include <stdio.h>
int main()
{
    int a[100],b[100],n,i;
    printf("Array a:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
          //scanf("%d",&b[i]);
    {
        b[i]=a[i];
    }printf("\nArray b:");
    // scanf("%d",&b[i]);
       for(i=0;i<n;i++)
           scanf("%d",&b[i]);
       {
           printf("%d ",b[i]);
       }
    return 0;
}

