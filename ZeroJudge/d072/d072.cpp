#include <iostream>
#include <string>
using namespace std;

int main() {
    int t,y;
    while(cin>>t) {
        for(int i=0; i<t; i++) {
            string result;
            cin>>y;
            if(y%4==0) {
                if(y%100==0 && y%400!=0) result = "normal";
                else result = "leap";
            } else {
                result = "normal";
            }
            cout<<"Case "<<i<<": a "<<result<<" year"<<endl;
        }
    }
}
