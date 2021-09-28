#include <stdio.h>
#include <pthread.h>
//#include <unaccess.h>
#include <unistd.h> // sleep

void* my_thread(void *ptr)
{    
     printf("\n Entered in pthread");
     for(int i=0;i<100;i++)
     {
       printf("\n %d",i);
      }
     
     printf("\n pthread ID    :: %lu\n",pthread_self());//pthread_t var = pthread_self();
     sleep(2);
     printf("\n Thread stop");
     void pthread_exit(void *rval_ptr);
     pthread_exit(NULL);
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
    
    //pthread_join(tid,NULL);  //int pthread_join(pthread_t thread, void **retval);

    //printf("\n\n Main function...");
   //printf("\n PID:: %d\n", getpid());
    
    return 0;
}
