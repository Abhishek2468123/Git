#include <iostream>
using namespace std;
void print(int *P,int n){
    cout<<endl;
    for (int i = 0 ; i < n ; i++){
        cout<<P[i]<<" ";
    }
    cout<<endl;
}
void merge(int U[],int Lu,int V[],int Lv,int S[]){
    cout<<"In merge printing U:- "<<endl;
    print (U,Lu);
    cout<<"In merge printing V:- "<<endl;    
    print(V,Lv);
    int uf = 0,vf = 0;
    for (int sb = 0 ; sb < Lu + Lv ; sb++){
    if(uf < Lu && vf < Lv){
        if(U[uf] < V[vf]){
            S[sb] = U[uf];
            uf++;
        }
        else{
            S[sb] = V[vf];
            vf++;
        }
    }
    else if(uf < Lu){
        S[sb] = U[uf];
         uf++;
    }
    else{
        S[sb] = V[vf];
         vf++;
    }
  }
}
void mergesort(int S[],int n){
    
if ( n == 1 ) return;

    int U[n/2],V[n - n/2];
    
    for (int i = 0 ; i < n/2 ; i++){
        U[i] = S[i];
    }
    cout<<"\nprinting U :- \n";
    print (U,n/2);
    for (int i = 0 ; i < n-n/2 ; i++){
        V[i] = S[i + n/2];
    }
    cout<<"printing V :- \n";
    print (V,n-n/2);
    
    mergesort(U,n/2);
    mergesort(V,n - n/2);
    merge(U,n/2,V,n - n/2,S);
    
}
int main() {

int num;

cout<<"Enter number of elements in array :- \n";
cin>>num;

int arr[num];

cout<<"Enter elements :- \n";
for(int i = 0 ; i < num ; i++){
cout<<"Enter element "<<i+1<<" :- \n";
   cin>>arr[i];
}

cout<<"\nElements are :- \n";
for(int i = 0 ; i < num ; i++){
    cout<<arr[i]<<" ";
}

mergesort (arr,num);

cout<<"\nElements after mergesort are :- \n";
for(int i = 0 ; i < num ; i++){
    cout<<arr[i]<<" ";
}

    return 0;
}