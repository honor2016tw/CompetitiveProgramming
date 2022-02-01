#include <iostream>
using namespace std;

int main(){
  int n,d;
  while(cin>>n>>d){
    int sum=0,num=0;
    for(int i=0;i<n;i++){
      int big=-1,small=101,tmp,sum2=0;
      for(int j=0;j<3;j++){
        cin>>tmp;
        if(tmp>big) big=tmp;
        if(tmp<small) small=tmp;
        sum2+=tmp;
      }
      if((big-small)>=d){
        sum+=sum2/3;
        num++;
      }
    }
    cout<<num<<" "<<sum<<endl;
  }
} 
