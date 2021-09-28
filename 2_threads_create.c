#include <stdio.h>
#include <pthread.h>
#include <unistd.h> 
void* my_thread(void *ptr)
{    
     printf("\n Entered in pthread1kill");
     for(int i=0;i<100;i++)
     {
       printf("\n %d",i);
     }
}

void* my_thread2(void *ptr)
{    
     printf("\n Entered in pthread2");
     for(int i=0;i<100;i++)
     {
       printf("\n %d",i);
     }
}

int main(void)
{
    pthread_t tid;
    int ret1,ret2;

    ret1 = pthread_create(&tid,NULL,&my_thread,NULL);
    ret2 = pthread_create(&tid,NULL,&my_thread2,NULL);
    
    if (ret1 !=0) 
    {
            printf("ERORR; return code from pthread_create() is %d\n",ret1);
            return -1;
    }
    if (ret2 !=0) 
    {
            printf("ERORR; return code from pthread_create() is %d\n",ret2);
            return -1;
    }
    
    //int pthread_create(pthread_t *thread, const pthread_attr_t *attr,void *(*start_routine) (void *), void *arg);
    sleep(0.1);                          // 
    printf("\nloop is ending ");
    
    
    return 0;
}
