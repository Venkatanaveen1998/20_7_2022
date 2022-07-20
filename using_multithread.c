#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
void* cap_alphabates()
{
	int i;
	for(i=0;i<5;i++)
		printf("thread 1:%c\n",65+i);
}
void* low_alphabates()
{
        int i;
        for(i=0;i<5;i++)
                printf("thread 2:%c\n",97+i);
}
int main()
{
        pthread_t t1,t2;
        pthread_create(&t1,NULL,&cap_alphabates,NULL);
	pthread_create(&t2,NULL,&low_alphabates,NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
}

