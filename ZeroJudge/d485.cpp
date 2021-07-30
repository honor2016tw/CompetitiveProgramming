#include <iostream>
using namespace std;

int main(){
    long long int a,b;
    while(cin>>a>>b){
        cout<<(b-a+1)/2+(!(a+b)|(a%2==0&b%2==0))*1<<endl;
      }
  }
