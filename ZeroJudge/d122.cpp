#include <iostream>
#define ll long long 
using namespace std;

int main(){
    ll int n;
    while(cin>>n){
      ll int k5=0;
      for(ll int i=5;i<=n;i*=5) k5+=n/i;
      cout<<k5<<endl;
    }
  }
