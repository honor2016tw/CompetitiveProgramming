#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    while(cin>>a>>b>>c) {
        bool A=(a!=0),B=(b!=0);
        if(c!=(A&B) && c!=(A|B) && c!=(A^B)) cout<<"IMPOSSIBLE"<<endl;
        if(c==(A&B)) cout<<"AND"<<endl;
        if(c==(A|B)) cout<<"OR"<<endl;
        if(c==(A^B)) cout<<"XOR"<<endl;
    }
}