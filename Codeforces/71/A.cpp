#include <iostream>
#include <string>
using namespace std;


int main(){
  int n;
  string line;
  while(cin>>n){
    while(n--){
      cin>>line;
      if(line.length()<=10) cout<<line<<endl;
      else{
        cout<<line[0]<<line.length()-2<<line[line.length()-1]<<endl;
      }
    }
  }
}
