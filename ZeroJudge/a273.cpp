#include <iostream>
using namespace std;

int main(){
  int n,k;
  while(cin>>n>>k){
    if(n==0 | k==0){
        if(n!=0) cout<<"Impossib1e!"<<endl;
        else cout<<"Ok!"<<endl;
        continue;
      }
     if(n%k==0) cout<<"Ok!"<<endl;
     else cout<<"Impossib1e!"<<endl;
    }
  }
