#include <iostream>
using namespace std;

int main(){
    int n,m,k=0,k1=0,k2=0;
    cin>>n;
    while(n--){
        cin>>m;
        switch(m%3){
          case 0:
            k++;
            break;
          case 1:
            k1++;
            break;
          case 2:
            k2++;
            break;
          }
      }
    cout<<k<<" "<<k1<<" "<<k2<<endl;
  }


