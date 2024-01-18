#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> Q;
    int T;

    while(cin>>T) {
        while(T--) {
            int a,b;
            while(cin>>a) {
                switch(a) {
                case 1:
                    cin>>b;
                    Q.push(b);
                    break;
                case 2:
                    if(Q.empty()) {
                        cout<<"empty!"<<endl;
                        break;
                    }
                    cout<<Q.front()<<endl;
                    Q.pop();
                    break;
                }
            }
        }
    }
}
