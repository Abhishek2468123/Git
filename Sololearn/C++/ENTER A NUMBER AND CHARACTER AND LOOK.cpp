#include <iostream>
using namespace std;
int rows ,i ,j;

void print_star(int num){
    for ( i = 1 ; i <= num ; i++){
        for( j = 1 ; j <= i ; j++){
            cout<<"* ";
        }
        cout <<endl;
    }
            cout<<endl;
}

void print_num(int num){
    for (int i = 1 ; i <= num ; i++){
        for (int j = 1 ; j <= i ; j++){
            cout <<j<<" ";
        }
        cout<<endl;
    }
            cout<<endl;
}

void print_num1(int num){
    for (int i = 1 ; i <= num ; i++){
        for (int j = 1 ; j <= i ; j++){
            cout <<i<<" ";
        }
        cout<<endl;
    }
            cout<<endl;
}

void print_num12(int num){
    for (int i = 1 ; i <= num ; i++){
        for (int j = 1 ; j <= i ; j++){
            cout <<i+j-1<<" ";
        }
        cout<<endl;
    }
            cout<<endl;
}

void print_floyds_triangle (int num){
    for (int i = 1 ; i <= num ; i++){
        for (int j = 1 ; j <= i ; j++){
           if ((i + j)%2 == 0)
            cout <<"1 ";
            else
            cout <<"0 ";
        }
        cout<<endl;
    }
            cout<<endl;
}

void print_alphabet (char c){
    for (int i = 1 ; i <= rows ; i++){
        for (int j = 1 ; j <= i ; j++){
           cout<<c++<<" ";
        }
        cout<<endl;
    }
            cout<<endl;
}

int main() {
cout<<"Enter the number :- \n\n";
cin>>rows;
cout<<"Printing "<<rows<<" stars :- \n\n";
print_star(rows);
cout<<"Printing "<<rows<<" num :- \n\n";
print_num (rows);
cout<<"Printing "<<rows<<" num1 :- \n\n";
print_num1(rows);
cout<<"Printing "<<rows<<" num12 :- \n\n";
print_num12 (rows);
cout<<"Printing "<<rows<<" Floyd's Number :- \n\n";
print_floyds_triangle(rows);
cout<<"Enter alphabet :- \n";
char c ;
cin>>c;
print_alphabet (c);
    return 0;
}