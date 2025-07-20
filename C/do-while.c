#include<stdio.h>

int main() {
    int i = 1,a;
    printf("the table u want=");
  scanf("%d",&a);

    do {
        printf("%d*%d=%d\n",a,i,a*i);
        i++;
    } while (i <= 10);

    return 0;
}
