#include <iostream>
using namespace std;
int GCD(int a,int b){
  if(!b) return a;
  return GCD(b,a%b);
 }

int main(){
    int a,b;
    while(cin>>a>>b) cout<<((a>b)?GCD(a,b):GCD(b,a))<<endl;
  }
