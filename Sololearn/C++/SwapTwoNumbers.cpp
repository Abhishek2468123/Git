#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int *temp ;
    temp = a ;
    a = b ;
    b = temp ;
}
void swap2(int *a ,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
int num1 ,num2 ;
cin>>num1>>num2;
cout<<"Before swap:- \n";
cout<<num1<<" "<<num2<<endl;
cout<<"After swap:- \n";
swap(num1,num2);
cout<<num1<<" "<<num2<<endl;
cout<<"After swap2:- \n";
swap2(&num1,&num2);
cout<<num1<<" "<<num2;
    return 0;
}