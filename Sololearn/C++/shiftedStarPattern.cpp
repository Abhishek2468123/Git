#include <iostream>
using namespace std;

int main() {
int n ;
cin>>n ;
for(int i = 0 ; i < n ; i++){

//peeche ke liye
    if(i%2 == 0){
        for(int j = 0 ; j < n ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    
//aage ke liye    
    else{
      for(int j = 0 ; j < n ; j++){
            cout<<" *";
        }
        cout<<endl;  
    }
}
    return 0;
}