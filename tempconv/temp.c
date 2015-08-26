#include<stido.h>
#include<stdlib.h>
#include<unistd.h>
#include<assert.h>

#include "tempc.h"

//int f2c(int);
//int c2f(int);

int tempc(double temp_in,char temp_in_unit,double temp_out, char temp_out_unit){
//    int temp_in,temp_out;
//    char temp_in_unit,temp_out_unit;
double t_out;
    if(temp_in_unit == 'c'){
      t_out = c2f(temp_in);
    }
    else if (temp_in_unit == 'f')
    {
      t_out = f2c(temp_in);
    }
    else {
      fprintf(stderr, "Temperature unit '%c'is not supported yet\n",temp_in_unit);
      return -1;
    }
    printf("input = %lf %c, output = %lf %c \n", 
                    temp_in,temp_in_unit,t_out,temp_out_unit);
                    *temp_out = t_out;
                    
                    
    
  }
  int main(int argv,char **argc)
  {
        double temp_in,temp_out;
        char temp_in_unit,temp_out;
        
  }