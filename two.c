#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
#include<time.h>
#define BILLION  1000000000L;
int main(){
    struct timespec start, stop;
    double elapsed;
    clock_gettime( CLOCK_REALTIME, &start);
    int a=fork();
    if(a==0){
        execl("./test.sh","./test.sh",NULL);
    }
    else{        
            int b=fork();
            if(b==0){
                execl("./test.sh","./test.sh",NULL);
            }
            else{    
                int c=fork();
                if(c==0){
                   execl("./test.sh","./test.sh",NULL);
                }
                else{        
                
                }    

            }
    }
}
// clock_gettime( CLOCK_REALTIME, &stop);
//         elapsed = ( stop.tv_sec - start.tv_sec )
//           + (double) ( stop.tv_nsec - start.tv_nsec )/BILLION;
//         printf("%lf seconds elapsed in count A \n", elapsed);
