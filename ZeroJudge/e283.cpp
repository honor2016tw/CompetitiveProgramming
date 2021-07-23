#include <iostream>
#include <cmath>
#define IO ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main(){
  IO;
  unsigned int N;
  char ch[15];
  ch[1]='E';
  ch[3]='F';
  ch[4]='C';
  ch[10]='A';
  ch[11]='D';
  ch[14]='B';
  while(cin>>N){
    while(N--){
      int tmp=0,n;
      for(int i=0;i<4;i++){
        cin>>n;
        tmp+=0+n*pow(2,i);
      }
      cout<<ch[tmp];
    }
    cout<<endl;
  }
}


