#include <iostream>
#define abs(a) (a<0?(-a):a)

using namespace std;

int main() {
    int a,b;
    while(cin>>a>>b) {
        int sum=0;
        for(int i=a,j=0; j<(abs((a-b))+1); i--,j++) {
            cout<<(a>b?i:(a+j));
            if(j!=abs((a-b))) cout <<"+";
            sum+=(a>b?i:(a+j));
        }
        cout<<"="<<sum<<endl;
    }
}

