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
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}