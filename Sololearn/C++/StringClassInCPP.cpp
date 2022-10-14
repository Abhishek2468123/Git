#include <iostream>

using namespace std;

//length() function to calculate length of string
int length(const char* str){

    int L = 0;
    
    while(*str != 0){
        L++;
        str++;
    }
    return L;
}

//function for copying string to given string
void scopy(char* d,const char* s,int L = 0){
    //start copying from length L 
    d = d + L;
    
    while(*s != 0){
        *d = *s;
        d++;
        s++;
    }
    *d = 0;//to store null character at last
}

//String class **** not string ****
class String{
    char* ptr;
    public :
    String (){
    //initialising ptr as NULL
        ptr = NULL;
    }
    
    //passing With char argument
    String(const char* rhs){
        ptr = new char[length(rhs)];
        scopy(ptr,rhs);
    }
    
    String(const String& rhs){
        ptr = new char(length(rhs.ptr) +1);
        scopy(ptr,rhs.ptr);
    }
    
    void print(){
        if (ptr == NULL){
            cout<<"NULL\n";
        }
        else{
            cout<<ptr;
        }
    }
    //'=' operator overloading for array passing
    String& operator=(const char* rhs){
    
       //freeing ptr already reserved
        delete[] ptr;
        
        //newly dynamic allocation
        ptr = new char[length(rhs) +1];
        scopy(ptr,rhs);
        //this pointer refers to the pointer of the class 
        return *this;
    }
    
    //'=' operator overloading for String passing
    String& operator=(const String& rhs){
        if(&rhs == this) return *this;
        delete[] ptr;
        ptr = new char[length(rhs.ptr) +1];
        scopy(ptr,rhs.ptr);
        return *this;
    }
    
    //'[]' operator overloading to return String at ith index
    char& operator[](int i){
        return ptr[i];
    }
    
    //'+' operator overloading for concatenating two strings
    String operator+(const String &rhs){
      String res;
      
      //dynamically allocating res 's ptr in heap to store a new concatenated string
        res.ptr = new char(length(ptr) + length(rhs.ptr) +1);
        
        //copying the first string
        scopy(res.ptr,ptr);
        
        //adding after being copied another string
        scopy(res.ptr,rhs.ptr,length(ptr));
        return res;
    }
    
    //Destructor of String class
    ~String(){
    
        //Deallocating ptr or returning to heap ,memory reserved by ptr in heap
        delete  ptr;
    }
};

int main() {

String str1 , str2("World");
str1 = " Hello  ";
String str3;
str3 = str1+str2;
str3.print();
    return 0;
}