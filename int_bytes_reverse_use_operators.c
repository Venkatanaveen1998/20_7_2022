#include <stdio.h>
int main()
{
    int a=0x12345678,A,B,C,D;
    A=(a<<24);
    B=(a>>24);
    C=(a<<8)&(0x00ff0000);
    D=(a>>8)&(0x0000ff00);
    a=A|B|C|D;
    printf(" %08x",a);
}
