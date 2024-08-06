#include<stdio.h>
int main(){
   unsigned int a=129;
   int* ptr=&a;
   char * ptr2=&a;
   printf("int value %u\n",*ptr);
   printf("char value %u",*ptr2);
   return 0;
}
