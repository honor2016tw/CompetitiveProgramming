#include <iostream>
using namespace std;

int main() {
    int N,max=-1,sum=0,tmp;
    cin>>N;
    for(int i=0; i<N; i++) {
        cin>>tmp;
        sum+=tmp;
        if(sum<0) sum=0;
        if(sum>max) max=sum;
    }
    cout<<max<<endl;
}
