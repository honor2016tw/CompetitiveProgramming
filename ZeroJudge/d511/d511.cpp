#include <iostream>
#define Max(a,b) (a>b?a:b)
using namespace std;

int main() {
    int a,b,c,score=0;
    for(int i=0; i<5; i++) {
        cin>>a>>b>>c;
        if((a+b+c)>2*(Max(a,Max(b,c)))) score++;
    }
    cout<<score<<endl;
}
