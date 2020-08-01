#include<stdio.h>
int main()
{
    int a[100], n, i, sum=0;
    printf("\nEnter the limit ");
    scanf("%d",&n);
    printf("\nEnter the integers from 1 to %d (0 to terminate) ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sum=(n*(n+1))/2;
    for(i=0;i<n;i++)
        sum=sum-a[i];
    printf("\nMissing integer : %d\n",sum);

}