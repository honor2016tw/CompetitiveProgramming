#include <iostream>
using namespace std;

int main(){
  int n,m;
  while(cin>>n){
      int max=-1;
      while(n--){
          cin>>m;
          if(m>max) max=m;
        }
      cout<<max<<endl;
    }
  }
