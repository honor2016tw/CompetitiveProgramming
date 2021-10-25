#include <iostream>
#define ll long long 
using namespace std;

ll int Abs(ll int n){
  if(n>0) return n;
  return -1*n;
}

int main(){
  ll int a,b;
  while(cin>>a>>b){
    cout<<Abs(a-b)<<endl;
  }
}
