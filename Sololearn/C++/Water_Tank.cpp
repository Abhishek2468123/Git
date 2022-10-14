#include <iostream>
using namespace std;
int main() {
double capacity = 30 , current = 0;
while(true){
    char command;
    cin>>command;
    if (command == 'x' || command == 'X'){break;}
    else if(command == '-'){
        double qty;
        cin>>qty;
        if (qty >= current){
            
            cout<<current<<" lt. water taken."<<endl;
            current = 0;
            cout << "Currently we have "<<current<<" lt water ."<<endl;
        }
        else {
        cout<<qty<<" lt. water taken."<<endl;
        current = current - qty;
        cout << "Currently we have "<<current<<" lt water ."<<endl;
    }
    }
    else if(command == '+') {
        double qty;
        cin>>qty;
        if (current+qty > capacity){
            cout<<capacity-current<<" lt. water added."<<endl;
            cout<<qty-capacity<<" lt. water wasted."<<endl;
            current = capacity;
        }
        else{
          current = current + qty; cout<<qty<<" lt. water added." <<endl; 
          cout << "Currently we have "<<current<<" lt water ."<<endl;
        }

        
    }
    else{
        cout<<"Invalid command"<<endl;
    }
}
    return 0;
}