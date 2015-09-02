#include<stdio.h>
int main(int argv,char **argc)
{
    float input,output;
    char unit,unit_out;
    int check= 0;
    printf("please insert temp input:");
    scanf("%f %c",&input,&unit);
    if( unit == 'c' || unit == 'C' || unit == 'f' || unit == 'F')
    {
        if(unit == 'c' || unit == 'C')
        { unit_out = 'f'; }
        else
        { unit_out = 'c'; }
        
        if( (unit == 'c' || unit == 'C') && (input >=0  && input <= 100) )
        {
            output = (input*1.8)+32;
            check = 1;
            printf("in C\n");
        }

        if( (unit == 'f' || unit == 'F') && (input >=32  && input <= 212) )
        {
            output = (input-32)/1.8;

            check = 1;
            printf("in F\n");
        }
        
        if(check == 1)
        {
            printf("%3.2f %c\n",output,unit_out);
        }
        else
        {
            printf("invalid input\n");
        }
        
    }
    else{
        printf("invalid input\n");
    }
    //printf("%f %c\n",input,unit);
    return 0;
    
}