#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
// program of first star program

int main()
{
    register int i,j;
    int n;
    printf("enter the number of rows\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
            printf("*");
            printf("\n");
    }




    return 0;
}
