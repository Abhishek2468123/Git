#include <iostream>
using namespace std;
double a ,sum = 0;
int main() {
cout<<"Enter a number to get sum of infinite G.P. generatd by dividing the number by 2 every time.\n";
cin>>a;
while(a != 0){
    sum = sum + a;
    a = a/2.0;
}
cout<<sum;
    return 0;
}