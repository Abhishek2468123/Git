#include <iostream>
using namespace std;
int num,sum = 0,dif;
int main() {
cin>>num;
for (int i = 1 ; i < num -1 ;i++){
    if (num % i == 0){
        sum = sum + i;
    }
}
dif = sum - num ;
if (sum > num){
    cout<<"Abundant"<<endl;
    cout<<"Abundance = "<<dif;
}
else{
    cout <<"Not abundance.";
}
    return 0;
}