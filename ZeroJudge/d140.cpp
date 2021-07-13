#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
  int a,c;
  char b;
  while(cin>>a>>b>>c){
    int tax=0;
    int n = a*100+c;
    if(n<10000) tax=1;
    if(n>50000) n*=0.6;
    else if(n>10000) n*=0.8;
    else n*=0.9;
    int point = int(n)%100;
    cout<<"$"<<int(n)/100+tax*8<<"."<<setfill('0')<<setw(2)<<point<<endl; 
    }
  }
