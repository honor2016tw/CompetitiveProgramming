#include <iostream>
#include <stack>
#define endl "\n"
typedef long long int LL;
using namespace std;


int main(){
  int T;
  while(cin>>T){
    while(T--){
      //bool possible = true;
      stack<int> Sta1,Sta2,Sta3; 
      LL N;
      cin>>N;
      LL current = N; 
      for(int i=0;i<N;i++){ 
        int tmp;cin>>tmp;
        Sta1.push(tmp);
      }
      while((!Sta1.empty() || !Sta2.empty())){
        if(!Sta1.empty() && Sta1.top()==current){
          Sta3.push(Sta1.top());
          Sta1.pop();
          current--;
          continue;
        }if(!Sta2.empty() && Sta2.top()==current){
          Sta3.push(Sta2.top());
          Sta2.pop();
          current--;
          continue;
        }if(!Sta1.empty() && Sta1.top()<current){
          Sta2.push(Sta1.top());
          Sta1.pop();
          continue;
        
        }
        if(Sta3.size()==(long unsigned int)N) 
          break;
        break;
      }
      if(Sta3.top()==1) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
  }
}
