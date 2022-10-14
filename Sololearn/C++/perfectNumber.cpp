#include <iostream>
using namespace std;
int factorial(int a){
    if(a == 0 || a == 1){
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
}
int main() {
cout<<"Enter no. :- "<<endl;
int a,sum = 0;
cin>>a;
int check = a;
while(a>0){
    int temp;
    temp = a%10 ;
    sum = sum + factorial(temp);
    a = a/10;
}
if(check == sum){
    cout<<"Perfect number"<<endl;
}
else{
    cout<<"Not a perfect number"<<endl;
}
    return 0;
}