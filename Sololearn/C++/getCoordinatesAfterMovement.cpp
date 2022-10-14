#include <iostream>
using namespace std;
int main() {
cout<<"Please use commands :- \n\n<1> R x -> to go rightwards by cordinate by x.\n\n<2> L x -> to go leftwards by cordinate by x.\n\n<3> U y -> to go upwards by cordinate by y.\n\n<4> D y -> to go downwards by cordinate by y.\n\n<5> E -> to get final cordinats and exit.\n\n";
  char direction ;
  int coordinate ,x = 0, y = 0;
  while(true){
    cin>>direction>>coordinate ;
    switch (direction)  {
      
      case 'R' :
     cout<<"Increased x coordinate rightwards by "<<coordinate<<" ."<<endl;
      x = x + coordinate ;
      break ;
      
      case 'L' :
      cout<<"Decreased x coordinate leftwards by "<<coordinate<<" ."<<endl;
      x = x - coordinate ;
      break ;
      
      case 'U' :
      cout<<"Increased y coordinate upwards by "<<coordinate<<" ."<<endl;
      y = y + coordinate ;
      break;
      
      case 'D' :
      cout<<"Decreased y coordinate downwards by "<<coordinate<<" ."<<endl;
      y = y - coordinate ;
      break ;
      
      case 'E' :
      //cout <<x<<" "<<y<<endl;
      //exit(0);
      goto End;
    }
  } 
  End : cout <<"\nInitial coordinates are :- \n(x,y) = 0,0\n"<<"Final cordinates are :- \n(x,y) = "<<x<<" "<<y<<endl;
    return 0;
  }