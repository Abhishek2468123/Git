#include <iostream>
using namespace std;

int main() {

int rows;

cin>>rows;

for(int i=rows ;i>0 ; i--){

//for printing spaces
    for(int j = rows-i ;j>0;j--){
        cout<<" ";
 }  
//for printing * with space      
    for(int k = i ; k>0 ; k--){
        cout <<"* ";
    }
//moving to a new line after each loop    
    cout<<endl;
    
}
    return 0;
}