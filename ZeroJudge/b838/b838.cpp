#include <iostream>
#include <stack>
using namespace std;

int main(){
  int t;
  string input;
  cin>>t;
  while(t--){
    long long int sum=0;
    bool failed=false;
    stack<int> S; 
    cin>>input;
    for(size_t i=0;i<input.length();i++){
      switch(input[i]){
        case '(':
          S.push(0);
          break;
        case ')':
          if(!S.empty() || S.top()==0){
            sum++;
            S.pop();
          }else{
            failed=true;
          }
      }
    }
    if(!S.empty()) failed = true;
    cout<<(failed?0:sum)<<endl;
  }
}
