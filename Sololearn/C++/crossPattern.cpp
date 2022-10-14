#include<iostream>
using namespace std;
int main()
{
    int no,i,j;
    cout<<"enter the value"<<endl;
    cin>>no;
    for(i=0;i<no;i++)
    
    {
    
        for(j=1;j<=no;j++)
        
        {
        
           if(j - i == 1)
           
           {
               cout<<"\\";
           }
           
           else if (j + i == no)
           
           {
               cout<<"/";
           }
           
           else
           {
               cout<<"*";
           }
        }
           cout<<"\n";
    }
}