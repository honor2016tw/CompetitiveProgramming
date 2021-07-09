#include <iostream>
using namespace std;

int main(){
	int t,y,cnt=0;
	while(cin>>t){
    while(t--){
      cnt++;
      cin>>y;
      if(y%4==0){
        if(y%100==0 && y%400!=0) cout<<"Case "<<cnt<<": a normal year"<<endl;
        else cout<<"Case "<<cnt<<": a leap year"<<endl;
      }else{
        cout<<"Case "<<cnt<<": a normal year"<<endl;
      }
    }	
  }
}
