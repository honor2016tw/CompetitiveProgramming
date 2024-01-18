#include <iostream>
#include <stack>

using namespace std;

int main() {
    int T;
    while(cin>>T) {
        stack<int> S;
        while(T--) {
            int a,b;
            while(cin>>a) {
                switch(a) {
                case 1:
                    cin>>b;
                    S.push(b);
                    break;
                case 2:
                    if(S.empty()) {
                        cout<<"empty!"<<endl;
                        break;
                    }
                    cout<<S.top()<<endl;
                    S.pop();
                }
            }
        }
    }
}
