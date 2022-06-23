#include <iostream>
#include <bitset>
#define MAXN 10000005
using namespace std;

bitset<MAXN> arr;

int main(){
  int N,L,R,Max=-1;
  arr.reset();
  while(cin>>N){
   for(int j=0;j<N;j++){
      cin>>L>>R;
      if(L>Max) Max=L;
      if(R>Max) Max=R;
      for(int i=L;i<R;i++)
        arr[i]=1;
     }
     int sum=0;
     for(int i=0;i<Max;i++)
      if(arr[i]) sum++;
     cout<<sum;
  }
}
