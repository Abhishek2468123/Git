#include <stdio.h>

int main() {
int n;
scanf("%d",&n);
int prv = 0,sum = 0;
for(int i = 0 ;i<n;i++){
    prv = prv * 10 + 1*n;
    sum = sum + prv;
    if (i == (n-1)){
       printf ("%i",prv); 
    }
    else{
        printf ("%i + ",prv ) ;
        }
}
printf ("\b = %i",sum);
    return 0;
}