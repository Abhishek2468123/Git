#include <iostream>
using namespace std;
bool check_Armstrong(int num) {
    int temp = num,rem,sum = 0;
    while(num != 0){
        rem = num % 10;
        sum += ( rem*rem*rem );
        num /= 10;
    }
    if (temp == sum )
    return true; 
    else 
    return false;
}
/* void swap (int &a,int &b){
    int temp = a ;
    a = b;
    b = temp;
}  */
int main() {

int n,num,num1,num2;

cout<<"Enter 1 to check Armstrong Number :- "<<endl;

cout<<"Enter 2 to find the Armstrong Numbers between two numbers :- "<<endl;

cin>>n;

switch (n) {

    case 1 : {
    cin >> num ;
        if (check_Armstrong (num)){
            cout<<"Entered Number is Armstrong Number . "<<endl;
        }
        else {
            cout<<"Entered Number is NOT an Armstrong Number . "<<endl;
        }
        break;
    }
    case 2 : {
        cin >> num1 >> num2 ;
       /* if (num1 < num2){
        swap(num1,num2);
            } */
            
        for (int i = num1 ;i <= num2;i++){
        if (check_Armstrong (i)){
        if (i == 1){
            cout<<"*** 001 *** is an Armstrong Number ."<<endl ; //This is for 1 to 001 transformation and nothing else.
        }
        else{
        cout<<"*** "<<i<<" *** is an Armstrong Number."<<endl;
        }
      }
    }
  break ; 
 }
 default : {
     cout<<"Enter Only 1 or 2 , then if you have selected :- \n 1 :- Enter one number which you want to check.\n 2:- Enter two numbers between which you want to find Armstrong Numbers . "<<endl;
 }
}

    return 0;
}