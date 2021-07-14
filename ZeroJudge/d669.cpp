#include <iostream>
using namespace std;

int main(){
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2,h1+m1+h2+m2){
        int result = ((h2+24*(h2==0))*60+m2)-((h1+24*(h1==0))*60+m1);
        cout<<((result>=0)?result:1440+result)<<endl; 
      }
  }

