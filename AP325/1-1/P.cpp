#include <iostream>
using namespace std;

int eval(){
  int x,y;
  char op;
  cin>>op;
  switch(op){
    case 'f':
      x=eval();
      return 2*x-1;
    case 'g':
      x=eval();
      y=eval();
      return (x+2*y)-3;
    default:
      return op-'0';
  }
  return 0;
}

int main(){
  cout<<eval();
}

