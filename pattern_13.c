#include<stdio.h>
int main()
{
        int i,j,n;
        printf("enter a number pattern u want to find \n");
        scanf("%d",&n);
        for(i=n;i>0;i--)
        {
                for(j=n;j>=i;j--)
                        printf("%c",96+i);

        printf("\n");
        }
}
