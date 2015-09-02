#include <stdio.h>
struct info {
    char *name;
    int age;
    float heigh;
    float weight;
    
} n[10];
/* n[] = {
      {"Smith",100,180,0,90.5},
      {"John",100,180.0,90.5},
 };
*/
 int main(int argc,char **argv){
  int i,age;
  char name[80];
  float h,w;
  while(1)
  {
     int count =  scanf("%s %d %f %f\n",name,&age,&h,&w);
        if(count != 4 )break;
     printf("%s %d %2.1f %2.1f\n",name, age,h,w);
  }
  /*
  for (i=0;i<2;i++)
  {
     printf("%s %d %f %f\n",n[i].name, n[i].age,n[i].heigh,n[i].weight);
     
  }*/
  
 }