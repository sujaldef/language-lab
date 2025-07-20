#include <stdio.h>
int main()
{
    int n,sum=0,r,k,mul=1;
    printf("Enter a number");
    scanf("%d",&n);
    while(k!=0)
    {
        r=k%10;
        for(int i=1;i<=r;i++)
    {
        mul=mul*i;
    }
        k=k/10;
        sum=sum+mul;
    }
    if(sum==n)
    {
        printf("\nNumber is a strong");
    }
    else
    {
        printf("\nNumber is not a strong");
    }
    return 0;
}
