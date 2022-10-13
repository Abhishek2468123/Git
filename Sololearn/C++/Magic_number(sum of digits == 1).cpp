#include <iostream>

using namespace std;

int  magic (int num){

    int rem,sum = 0 ;
    
    while(num != 0 ){
        rem = num % 10 ;
        sum = sum + rem ;
        num = num / 10 ;       
    }
    
    if (sum > 9){
        return magic(sum);
    }
    
  return sum;
  
}

int main() {

int num;

cout<<"Enter a number to check whether its Magic Number or Not ."<<endl;

cin>>num;

if (magic(num) == 1){

    cout<<""<<num<<" is a Magic Number as the sum of digits is "<<magic(num)<<" ."<<endl;
    
}

else {
    
    cout<<"Sorry ,"<<num<<" is not a Magic Number as the sum of digits is -> "<<magic(num)<<" \nOOPS !!! Try Again.";
    
}

    return 0;
    
}