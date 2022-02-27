#include <iostream>
#define MAXN 10000
#define fastio cin.tie(0);ios::sync_with_stdio(0)
using namespace std;

int a[MAXN],b[MAXN],c[MAXN];

int main(){
  fastio;
  int T,N,K;
  cin>>T;
  while(T--){
    cin>>N>>K;
    for(int i=0;i<N;i++) cin>>a[i]>>b[i];
    for(int i=0;i<N;i++) cin>>c[i];
    int M=0,zero=0,time=0;
    int biggest = -1,longest=-1;
    bool impossible = false;
    for(int i=0;i<N;i++)
      if(c[i]>biggest) biggest=c[i];
    for(int i=0;i<N;i++)
      if(((biggest-a[i])/b[i])>longest && b[i]!=0)
        longest = (biggest-a[i])/b[i];
    for(int i=0;i<N;i++)
      if(b[i]==0) zero++;
    if(zero>=K)
      impossible=true;
    time=1;
    while(!impossible){
      int cnt=0;
      for(int i=0;i<N;i++)
        if(a[i]+time*b[i]>biggest)
          cnt++;
      if(cnt==K){
        M = time;
        break;
       }
      else if(cnt>K){
        time = longest/2;
        continue;
      }else{
        if(longest + time == time*2){
            impossible = true;
            break;
          }else
            time = (longest + time)/2;
      }
    }
    M=time;
    cout<<(impossible?-1:(M-1))<<endl;
  }
}
