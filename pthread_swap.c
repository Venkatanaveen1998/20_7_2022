#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void* swap(void** );
int main()
{
        pthread_t t1;
        int *var[2],a=5,b=10;
        var[0]=&a;
        var[1]=&b;
        printf("Before swapping %d %d \n",*var[0],*var[1]);
        pthread_create(&t1,NULL,&swap,&var);
        pthread_join(t1,NULL);
        printf("After swapping %d %d \n",*var[0],*var[1]);
}
void *swap(void** var)
{
       int **var1=(int **)var;
        int *temp;
        temp=var1[0];
          var1[0]=var1[1];
          var1[1]=temp;
}
