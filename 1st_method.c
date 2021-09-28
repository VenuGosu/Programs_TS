#include <stdio.h>
#include <pthread.h>
#include <unistd.h> 
void* my_thread(void *ptr)
{    
     printf("\n Entered in pthread");
     for(int i=0;i<100;i++)
     {
       printf("\n %d",i);
     }
}

int main(void)
{
    pthread_t tid;
    int ret;

    ret = pthread_create(&tid,NULL,&my_thread,NULL);
    if (ret !=0) 
    {
            printf("ERORR; return code from pthread_create() is %d\n",ret);
            return -1;
    }
    
    //int pthread_create(pthread_t *thread, const pthread_attr_t *attr,void *(*start_routine) (void *), void *arg);
    sleep(0.1);                          // 
    printf("\nloop is ending ");
    
    
    return 0;
}
