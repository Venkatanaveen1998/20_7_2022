#include<stdio.h>
int main()
{
        int i,j,n;
        printf("enter a number pattern u want to find \n");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                for(j=0;j<=i;j++)
                        printf("%c",96+j+1);

        printf("\n");
        }
}
