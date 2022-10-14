#include <iostream>
using namespace std;

int main() {
int num ;
label:
cin>>num;
if (num <= 0){
    goto label ;
}
int num1 = 0;
int num2 = 1;
    printf("Fibonacci series upto %d term(s) is  :- \n",num);
    printf("Term   Num\n");
for (int i = 1 ;i <= num ; i++){
if (i < 10){
    printf("0%d  ->  %d\n",i,num1); }
else{
    printf("%d  ->  %d\n",i,num1); }
    int temp = num2;
    num2 = num1 + temp;
    num1 = temp;
}
    return 0;
}