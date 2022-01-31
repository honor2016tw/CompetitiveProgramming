#include <iostream>
#define N 100005
using namespace std;

int arr[N];
int sum[N];

int main(){
  int n,m,l,r;
  while(cin>>n>>m){
    for(int i=1;i<=n;i++){
      cin>>arr[i];
      if(i==1){
        sum[i]=arr[i];
        continue;
      }
      sum[i]=arr[i]+sum[i-1];
    }
    for(int i=0;i<m;i++){
      cin>>l>>r;
      cout<<sum[r]-sum[l-1]<<endl;
    }
  }
}
