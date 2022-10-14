#include <iostream>

using namespace std;

int palindrome(int num){

    int temp = num ,sum = 0 ,rem;
    
    while(num > 0){
    
        rem = num % 10;
        sum = sum*10 + rem;
        num = num / 10 ;
    }
    if(temp == sum){
        return sum;
    }
    else {
        return sum;
    }
}

int magic(int num){

    int temp,temp1 = num , rem , sum1 = 0 ;
    
    while(num > 0){
        rem = num % 10;
        sum1 = sum1 + rem;
        num /= 10;
    }
  //  cout<<" "<<sum1<<endl;
   int pal_num = palindrome(sum1);
//   cout<<pal_num<<"<-->"<<sum1<<endl;
   temp = pal_num * sum1;
  
 //  cout<<"1 ->"<<temp<<endl;
   
   if(temp == temp1){
 //  cout<<"2 ->"<<temp<<endl;
       return 1;
   }
   else{
  // cout<<"3 ->"<<temp1<<endl;
       return 0;
   }
}
void find_magic_num(int num1 ,int num2){
cout <<"The magic number(s) between "<<num1<<" & "<<num2<<" is(are) :- "<<endl;
    if (num1 < num2){
        while(num1 < num2){
            if(magic(num1)){
                cout<<"-> "<<num1<<endl;
            }
            num1++;
        }
    }
    else if (num1 == num2){
    if(magic(num1)) {
        cout<<"-> "<<num1<<endl;
    }  
   }
    else {
       while(num2 < num1){
            if(magic(num2)){
                cout<<"-> "<<num2<<endl;
            }
            num2++;
        } 
    }
}
int main() {
cout<<"Enter a number to check whether it is magic or not : -"<<endl;
int check_num;
cin>>check_num ;
if(magic (check_num )){
    cout<<"\nIts a magic number."<<endl;
}
else{
    cout<<"\n"<<check_num<<" is Not a magic number. \n";
}
cout<<"\nEnter range to find magic numbes between them.\n\n ";
int num1 ,num2 ;
cin>>num1>>num2;
find_magic_num (num1,num2);

    return 0;
}