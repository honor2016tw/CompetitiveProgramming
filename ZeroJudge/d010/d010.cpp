#include <iostream>
using namespace std;

int main(){
    int N,S;
    while(cin>>N){
       S=0;
       for(int i=1;i<N;i++) if(N%i==0) S+=i;
       if(S==N) cout<<"完全數"<<endl;
       if(S>N) cout<<"盈數"<<endl;
       if(S<N) cout<<"虧數"<<endl;  
        
      }
  }
