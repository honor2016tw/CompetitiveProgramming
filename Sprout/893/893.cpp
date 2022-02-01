#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int n;
  while(cin>>n){
  for(int i=1;i<=n;i++){
    cout<<setw(n-i+1);
    for(int j=0;j<i;j++) cout<<i;
    cout<<" ";
    for(int j=0;j<i;j++) cout<<i;
    cout<<endl;
   }
  }
}
