#include <iostream>
using namespace std;

int main(){
    int n,k;
    while(cin>>n>>k){
      int cnt=n;
      while(n>k){
          cnt+=n/k;
          n=(n%k)+(n/k);
        }
      cout<<cnt<<endl;
    }
  }
