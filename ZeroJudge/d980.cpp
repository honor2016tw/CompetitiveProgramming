#include <iostream>
#define Max(a,b) (a>b?a:b)
using namespace std;

bool IsTriangle(int a,int b,int c){
    if(a<=0 | b<=0 | c<=0) return false;
    if(a+b+c<=2*Max(a,Max(b,c))) return false;
    else return true;
  }

int main(){
    int T,a,b,c;
    cin>>T;
    for(int i=1;i<=T;i++){
        string res;
        cin>>a>>b>>c;
        if(IsTriangle(a,b,c)){
          if(a!=b & b!=c & a!=c) res="Scalene";
          else if(a==b==c) res="Equilateral";
          else res="Isosceles";    
          }else res="Invalid";
    cout<<"Case "<<i<<": "<<res<<endl;
      }
  }
