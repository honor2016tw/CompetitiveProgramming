#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  double pi = acos(-1);
  double D,L;
  while(cin>>D>>L)cout<<setprecision(3)<<fixed<<pi*(L/2)*sqrt((L/2)*(L/2)-(D/2)*(D/2))<<endl;
  }
