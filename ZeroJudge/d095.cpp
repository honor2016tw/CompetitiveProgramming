#include <iostream>
#include <iomanip>
#include <cmath>
#define Min(a,b) (a<b?a:b)
using namespace std;

int main(){
  int H,M;
  char dot;
  while(cin>>H>>dot>>M){
      if(H==0 & M==0) break;
      double res=fabs(fmodl((H*30+M*0.5)-M*6,360));
      cout<<setprecision(3)<<fixed<<Min(res,360-res)<<endl;
    }
  }
