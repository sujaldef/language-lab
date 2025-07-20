#include<stdio.h>
#include<string.h>
int main(){


  FILE*ptr;
  ptr=fopen("daisy.txt","r");
  if(ptr==NULL)
  {
    printf("noooo");
  }
  else{
   printf("yes");
  }
  fclose(ptr);

               return 0;
}
