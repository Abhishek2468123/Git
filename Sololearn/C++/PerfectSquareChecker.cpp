#include <iostream>
using namespace std;
int num;
int main() {
cin>>num;
for(int i = 2 ; i*i <= num ; i++){
    if ((num%i == 0) && (num/i == i)){
        cout <<"Perfect square -> "<< num<<" --> "<<i<<"\n";
    }
}
    return 0;
}