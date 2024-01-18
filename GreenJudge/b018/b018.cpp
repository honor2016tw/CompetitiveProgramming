#include <iostream>
#include <cstring>
#define MAX(a,b) (a>b?a:b)
using namespace std;


void Rev2Int(string A,int n[]) {
    for(int i=A.length()-1; i>=0; i--) n[A.length()-i-1] = A[i] - '0';
}
void Int2Arr(int N,int n[]) {
    int i=0;
    while(true) {
        if(N<=0) break;
        n[i]=N%10;
        N/=10;
        i+=1;
    }
}

void Print(int n[],int length) {
    for(int i=0; i<length; i++) cout<<n[i]<<endl;
}

void Mulit(int sum[],int na[],int nb[],int a,int b) {
    for(int i=0; i<a; i++) {
        for(int j=0; j<b; j++) {
            sum[i+j]+=(na[i]*nb[j])%10;
            if(sum[i+j]>=10) {
                sum[i+j+1]+=sum[i+j]/10;
                sum[i+j]%=10;
            }
            sum[i+j+1]+=(na[i]*nb[j])/10;
        }
    }
}
void Add(int sum[],int na[],int nb[],int a,int b) {
    for(int i=0; i<MAX(a,b); i++) {
        sum[i]+=(na[i]+nb[i])%10;
        if(sum[i]>=10) {
            sum[i+1]+=sum[i]/10;
            sum[i]%=10;
        }
        sum[i+1]+=(na[i]+nb[i])/10;
    }
}
int main() {
    int N;
    while(cin>>N) {
        int n[100],sum[200];
        memset(sum,0,200);
        Int2Arr(N,n);
        Add(sum,sum,n,10,10)
        for(int i=N; i>0; i--) {
            Int2Arr(i,n);
            Mulit(sum,sum,n,10,10);
        }
    }
}
