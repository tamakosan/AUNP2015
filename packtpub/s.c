#include<stdio.h>
#include<stdlib.h>

#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sys/time.h>
#include<time.h>
#define FILENAME "a.txt"
int main(int argc, char **argv){

    struct stat buf;
    struct timeval tv;
    int ret;
    //struct timezone tz;
       
    gettimeofday(&tv,NULL);
/*    printf("time of day = %ld . %ld\n",tv.tv_sec, tv.tv_usec); */
    printf(" current time of day  = %s\n",ctime(&tv.tv_sec));
    int i;
    //printf("argc = %d\n", argc);
    for(i=1;i<argc;i++)
    {
        printf("argv[%d] = '%s'\n",i,argv[i]);
        ret = stat(argv[i],&buf);
        if(ret == 0)
        {
        printf("ctime of file = %s\n",ctime(&buf.st_ctime));
        }else
        {
            perror("stat");// print error perror("function")
           // exit(-1);
        printf("error\n\n");
        }
        
    }

    
    //stat(FILENAME, &buf);

   // printf("ctime of file = %s\n",ctime(&buf.st_ctime));
   /*printf("ctime =%ld,mtime = %ld, atime = %ld\n",

            buf.st_ctime,
            buf.st_mtime,
            buf.st_atime);*/
    return 0;
}