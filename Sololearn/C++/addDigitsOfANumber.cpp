#include <iostream>
using namespace std;
 int add(int num ){
    int sum = 0,rem;
    while(num > 0 ){
    rem = num % 10;
    sum += rem;
    num /= 10;}
    if (sum > 9){
    return add(sum);
    }
    else {
        return sum;
    }
}
int main (){
int number1 ;
cout<<"EnterNo.\n";
cin>>number1;
 int number = add(number1);
    if (number == 1){
        cout<<"Special case."<<endl;
        cout<<number<<endl;
    }
    else{
         cout<<"Not Special case."<<endl;
        cout<<number<<endl;
    }
    return 0;
}
