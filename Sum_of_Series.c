#include <stdio.h>

int main()
{
    int n,i,sum=0;
    float fsum=0;
    printf("Enter the no. of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        fsum+=(1/sum);
    }
    printf("Sum of the series=%f",fsum);
}
