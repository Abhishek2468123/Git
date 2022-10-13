#include <stdio.h>

int main() {
int num,loop;
scanf("%d%d",&num,&loop);
if(loop == 0){
    loop = num ;
}
int prv = 0,sum = 0;
for(int i = 0 ;i<loop;i++){
    prv = prv * 10 + 1*num;
    sum = sum + prv;
    printf ("%d\n",prv); 
}
printf ("\n*** Sum -> %d ***",sum);
    return 0;
}