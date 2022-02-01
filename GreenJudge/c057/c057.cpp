#include <iostream>
#define ll long long 
using namespace std;

int Cacl(ll int idx,int Num){
  if(idx==1) return Num/10;
  return Cacl(idx-1,(Num*23)%100);
}

int main(){
  ll int T,N;
  while(cin>>T){
    while(T--){
      cin>>N;
      cout<<Cacl((N==21?1:N%21),23)<<endl;
    }
  }
}
