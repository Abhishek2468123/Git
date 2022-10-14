#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    //complete the function
int reverse = 0; 
int remainder = 0; 
int n1 = n; 
while (n != 0) { 
remainder = n % 10; 
reverse = reverse * 10 + remainder;
 n /= 10; 
} 
if (reverse == n1) 
return true; 
else 
return false; 
}

int main() {
    int n1,n2;
    cout<<"Enter two numbers between which you want to find Palindrome_number .\n";
    cin >>n1>>n2;
    cout<<"Palindrome number between "<<n1<<" and "<<n2<<" are :- \n"
;
    
for(int i=n1 ; i<=n2 ; i++){
    if(isPalindrome(i)) {
        cout <<i<<" is a palindrome .\n";
    }
}
    return 0;
}