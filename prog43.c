#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:",a);
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
    }
}
