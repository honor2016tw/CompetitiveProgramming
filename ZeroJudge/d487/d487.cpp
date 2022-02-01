#include <iostream>
using namespace std;


int Fac(int n){
  if(n==1 || n==0){
    cout<<1<<" = ";
    return 1;
  }
  cout<<n<<" * ";
  return n*Fac(n-1);
}

int main(){
  int n;
  while(cin>>n){
    cout<<n<<"!"<<" = "<<Fac(n)<<endl;
  }
}
