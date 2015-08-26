#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
double f2c(int cel){
    return (cel-32)/1.8;
}

#ifdef MAIN
int main(int argc,char **argv){
    double cel,fah;
    cel = 0;fah = f2c(cel);
    assert(fah == 32);
    
    cel = 100; fah = f2c(cel);
    assert( fah == 212);
    
    cel = -40;cel = f2c(cel);
    assert( cel == -40 );
    return 0;
}
#endif