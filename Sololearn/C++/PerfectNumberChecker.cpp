#include <iostream>
using namespace std;
void check_perfect(int a){
    int sum = 0 ;
    for (int i = 1 ;i<a;i++){
        if (a%i == 0)
          sum += i;
    }
    if (a == sum){
        cout <<a<<" is a Perfect Number.\n";
  }
  else{
      cout<<a<<" is not perfect.";
  }
}
int main() {
int i;
cin>>i;
check_perfect (i);
    return 0;
}