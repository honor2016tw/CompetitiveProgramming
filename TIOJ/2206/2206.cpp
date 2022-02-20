#include <iostream>
#define MAXN 100005

using namespace std;

int arr[MAXN];

int RecQuery(int a,int b){
  if(b==1) return arr[a];
  return arr[RecQuery(a,b-1)];
}

int main(){
  int N,Q,a,b;
  while(cin>>N){
    for(int i=1;i<=N;i++) cin>>arr[i];
    cin>>Q;
    for(int i=0;i<Q;i++){
      cin>>a>>b;
      if(!b) 
        cout<<a<<endl;
      else
        cout<<RecQuery(a,b)<<endl;
    }
  }
}
