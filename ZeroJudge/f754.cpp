#include <iostream>
#define LL long long 
#define fastio cin.tie(0);ios::sync_with_stdio(0);
using namespace std;

int main(){
  fastio
  LL int K,M;
  int N;
    cin>>N;
    for(int i=1;i<=N;i++){
      cin>>M>>K;
      cout<<"Case "<<i<<" :"<<endl;
      for(int j=1;j<K;j++){
        cout<<"第"<<j<<"位 : 拿"<<M/K<<"元並說DD! BAD!"<<endl;
      }
      cout<<"第"<<K<<"位 : 拿"<<M/K+(M%K)<<"元並說DD! BAD!"<<endl;
    }
  
}
