#include <iostream>

using namespace std;

int main() {

 int a,b;

 cin>>a>>b;


 while(a%b != 0){

   if(a <= b){ 
   
    int temp = a;
    a = b;
    b = temp;
    }
    
    a = a%b;
}

 cout<<b;

 return 0;
    
}