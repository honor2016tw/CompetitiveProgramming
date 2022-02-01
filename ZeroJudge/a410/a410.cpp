#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  double a,b,c,d,e,f;
  while(cin>>a>>b>>c>>d>>e>>f){
     double del=a*e-b*d,delx=c*e-f*b,dely=a*f-c*d;
     double x=delx/del,y=dely/del;
     if(del==0){
        if(!(delx+dely)) cout<<"Too many"<<endl;
        else cout<<"No answer"<<endl;
        break;
       }
     cout<<setprecision(2)<<fixed<<"x="<<x<<endl;
     cout<<setprecision(2)<<fixed<<"y="<<y<<endl;
    }
  }
