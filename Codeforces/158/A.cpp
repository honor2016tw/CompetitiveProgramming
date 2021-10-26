#include <iostream>
using namespace std;

int main(){
  int k,n;
  while(cin>>k>>n){
    int tmp,cnt=0,pre=0;
    while(n--){
      cin>>tmp;
      if(tmp<=0) break;
      pre=tmp;
      cnt++;
    }
    while(cin>>tmp){
      if(tmp!=pre || tmp<=0) break;
      cnt++;
    }
    cout<<cnt<<endl;
  }
}
