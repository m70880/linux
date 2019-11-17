#include <stdio.h>
#include <unistd.h>
int main(){

    const char* lp="|/-\\";
    char arr[51]={0};
    for (int i=0;i<50;i++){
        arr[i]='#';
        printf("[%-50s][%d%%][%c]\r",arr,i,lp[i%4]); 
        usleep(1000*100);
        fflush(stdout);

    }
    printf("\n");

    return 0;
}
