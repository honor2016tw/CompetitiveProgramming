#include <iostream>
using namespace std;

int main(){
	int t,y;
	while(cin>>t){
    while(t--){
      cin>>y;
      if(y%4==0){
        if(y%100==0 && y%400!=0) cout<<"a normal year"<<endl;
        else cout<<"a leap year"<<endl;
      }else{
        cout<<"a normal year"<<endl;
      }
    }	
  }
}
