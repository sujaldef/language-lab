#include<stdio.h>
int main()
{
    int i,n,a ;
    printf("choose the type of prg u want to run\n1=for loop\n2= while loop\n3=do-while loop\n");
    scanf("%d",n);
    printf("the table u want to print");
    scanf("%d",&a);
   switch (n) {
  case 1:
    for(i=1;i<=10;i++)
{
  printf("%d*%d=%d\n",a,i,a*i);
}
    break;
  case 2:
    while(i<=10){
printf("%d*%d=%d \n",a,i,a*i);
i++;
}
    break;
  case 3:
    do {
        printf("%d*%d=%d\n",a,i,a*i);
        i++;
    } while (i <= 10);
    break;
  default :
    printf("error in input");
}
return 0;
}
