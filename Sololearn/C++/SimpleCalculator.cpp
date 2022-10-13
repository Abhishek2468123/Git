#include <iostream>
using namespace std;
int sum(int a = 0,int b = 0){
    return a+b;
}
int subtract(int a =0,int b =0){
    return a-b;
}
float product(float a = 0,float b =0){
    return a*b;
}
float divide(float a = 0 , float b = 1){
 if (b == 0){
     cout<<"Error"<<endl;
 }
     return a/b ;

}
int main() {
cout<<"Welcome!,Here is a calculator which performs some simple mathematical operations two numbers only.\nPlease enter num ,num1 and num3 in sololearn.\n\n";
cout<<" To sum      :- Enter 1 \n To subtract :- Enter 2\n To multiply :- Enter 3\n To divide   :- Enter 4 \n\n Enter 1,2,3 or 4 :-\n"<<endl;
int num;
cin>>num;
switch (num){
    case 1 :{
            int s, a, b;
        cin>>a>>b;
        cout<<"Entered num1 = "<<a<<" & num2 = "<<b<<"to perform addition :-"<<endl;

         s = sum(a,b);
         cout<<"The sum of "<<a<<" and num2 "<<b <<" is :- "<<s<<endl;
         break ;
    }
        case 2 :{
        cout<<"Enter num1 & num2 to perform subtracttion :-"<<endl;
        int s1, a, b;
        cin>>a>>b;
         s1 = subtract(a,b);
         cout<<"The difference of "<<a<<" & "<<b<<" is :- "<<s1<<endl;
         break ;
    }
    
        case 3 :{
        cout<<"Enter num1 & num2 to perform multiplication :-"<<endl;
        int m, a, b;
        cin>>a>>b;
         m = product(a,b);
         cout<<"The product  of "<<a<<" & "<<b<<" is :-"<<m<<endl;
         break ;
    }
        case 4 :{
        cout<<"Enter num1 & num2 to perform division :-"<<endl;
        int d, a, b;
        cin>>a>>b;
         d = divide(a,b);
         cout<<"The division of "<<a<<" & "<<b<<" is :-"<<d<<endl;
         break ;
    }
    default:{
    cout<<"Error ! As you entered other than 1 ,2, 3, or 4 ";
    }
}
    return 0;
}