#include <iostream>
using namespace std;

int main(){
    int n,m;
    while(cin>>n){
      int sum=0;
      for(int i=0;i<n;i++){
        cin>>m;
        sum+=m;
        }
      cout<<((float(sum)/n>59)?"no":"yes")<<endl;
      }
  }
