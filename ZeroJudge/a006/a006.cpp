#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a,b,c;
    while(cin>>a>>b>>c) {
        int x1=(-1*b+sqrt(b*b-4*a*c))/(2*a);
        int x2=(-1*b-sqrt(b*b-4*a*c))/(2*a);
        if(b*b-4*a*c>=0) {
            if(x1==x2) cout<<"Two same roots x="<<x1<<endl;
            else cout<<"Two different roots x1="<<x1<<" , x2="<<x2<<endl;
        } else cout<<"No real root"<<endl;
    }
}
