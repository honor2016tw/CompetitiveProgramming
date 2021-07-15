#include <iostream>
using namespace std;

int main(){
    int n,f;
    long long int a,b,c;
    cin>>n;
    while(n--){
        long long int sum=0;
        cin>>f;
        while(f--){
            cin>>a>>b>>c;
            sum+=a*c;
          }
        cout<<sum<<endl;
      }
  }
