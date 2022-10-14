#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;

    
for (int i = 1; i <= n ; i++){
    for(int j = 1 ; j <= n ; j++){
        if( i==1 || j==1 || j==n || i==n){
            cout<<"* ";
        }
        else{
        for(int k = n;k>n-2;k--){
            cout<<" ";}
        }
    }
    cout<<endl;
}





return 0;
}


