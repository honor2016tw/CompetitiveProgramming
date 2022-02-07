#include <iostream>

using namespace std;

int main(){
  int N,M;
  int sum=0;
  int arr[21],cnt=0;
  bool nothing=true,first=true;
  while(cin>>N>>M){
    while(N--){
      int max=-1;
      for(int j=0;j<M;j++){
        int tmp;
        cin>>tmp;
        if(tmp>max) max=tmp;  
      }
      arr[cnt]=max;
      cnt++;
      sum+=max;
    }
    cout<<sum<<endl;
    for(int i=0;i<cnt;i++){
      if(sum%arr[i]==0){
        cout<<((first)?"":" ")<<arr[i];
        nothing = false;
        first=false;
        }
      }
    if(nothing) cout<<"-1"<<endl;
  }
}
