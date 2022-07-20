#include<stdio.h>
int main()
{
    int a=0x12345678,swap;
    char *ptr;
    ptr=&a;
    for(int i=0,j=3;i<j;i++,j--)
    {
        swap=*(ptr+j);
        *(ptr+j)=*(ptr+i);
        *(ptr+i)=swap;
    }
    printf("%08x\n",a);
    
}
