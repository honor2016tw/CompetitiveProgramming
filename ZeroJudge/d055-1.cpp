#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct point{
    double x;
    double y;
}node[2];

double Area(point A,point B,point C){
    return fabs((B.x-A.x)*(C.y-A.y)-(C.x-A.x)*(B.y-A.y))/2.0;
}

int main(){
    int N;
    cin>>N;
    while(N--){
	for(int i=0;i<=2;i++) cin>>node[i].x>>node[i].y;
	cout<<setprecision(0)<<fixed<<Area(node[0],node[1],node[2])/7.0<<endl;
    }
}
    