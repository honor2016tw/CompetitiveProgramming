#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double Ax,Ay,Bx,By,Cx,Cy;
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
        double sum=abs(Ax*By-Ay*Bx+Bx*Cy-By*Cx+Cx*Ay-Cy*Ax)/14.0;

        cout<<(int)sum+(int)(sum-(int)sum+0.5)/1<<endl;
    }

}
