#include <iostream>
using namespace std;

int MIN(int a,int b){
  if(a>b) return b;
  return a;

}

int main(){
  int cookie,cho,cake;
  while(cin>>cookie>>cho>>cake){
    cout<<cookie<<" 個餅乾，"<<cho+MIN((cookie/10),(cake/2))<<" 盒巧克力，"<<cake<<" 個蛋糕。"<<endl;
  }
}
