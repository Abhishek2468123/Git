#include <iostream>
using namespace std;
bool check_Magic(int n){
/*    if ((n % 9 ) == 1 )
    return true;
    else 
    return false;
*/
 bool is_Magic = ((n%9) == 1) ? true : false ; 
 return is_Magic; 
}
int main() {
int num;
cin>>num;
if(check_Magic (num)){
cout<<"Magic Number \n";}
else{
cout<<"Not a Magic Number \n";}
    return 0;
}