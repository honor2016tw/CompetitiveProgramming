#include <iostream>
using namespace std;

void Rev2Int(string A,int n[]){
	for(int i=A.length()-1;i>=0;i--){
		n[A.length()-i-1]=A[i]-'0';
	}
}

void RevPrint(int length,int n[]){
	for(int i=length-1;i>=0;i--){
		if(i==length-1&&n[i]==0) continue;
		cout<<n[i];
	}
}

void Add(int sum[],int na[],int nb[]){
	int carry=0;
	for(int i=0;;i++){
		sum[i]=na[i]+nb[i]+carry;
		if(sum[i]==0) break;
		if(sum[i]>=10){
			sum[i]=(na[i]+nb[i]+carry)%10;
			carry=(na[i]+nb[i]+carry)/10;
		}else carry=0;
	}
}

int main(){
	int na[100]={0},nb[100]={0},sum[105]={0};
	string A,B;
	cin>>A>>B;
	Rev2Int(A,na);
	Rev2Int(B,nb);
	Add(sum,na,nb);
	if(A.length()>=B.length()) RevPrint(A.length()+1,sum);
	else RevPrint(B.length()+1,sum);
}
