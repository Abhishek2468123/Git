#include <stdio.h>

//Your code will throw errors if this is used outside main function.

/*int a,b,c,sum,temp;
sum = ( a=2, b=3, c=4, a+b+c) ;*///Error


int main() {
int a,b,c,sum,temp;
sum = ( a=2, b=3, c=4, a+b+c) ;
printf("The value of sum of %d ,%d and %d is %d\n",a,b,c,sum);
temp = a,a=b,b=c,c=temp;
printf("The value of sum of %d ,%d and %d after swapping is %d",a,b,c,sum);
    return 0;
}