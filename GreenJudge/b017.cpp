#include <iostream>
using namespace std;

void Rev2Int(string A,int n[]){
	for(int i=A.length()-1;i>=0;i--){
		n[A.length()-i-1]=A[i]-'0';
	}
}

void RevPrint(int length,int n[]){
	for(int i=length-1;i>=0;i--){
		if(n[i]!=0){
			length=i;
			break;
		}
	}
	for(int i=length;i>=0;i--){
		cout<<n[i];
	}
}
void Mul(int length,int product[],int na[],int nb[]){
	for(int i=0;i<length;i++){
		for(int j=0;j<length;j++){
			product[i+j]=product[i+j]+na[i]*nb[j];
			if(product[i+j]>=10){
				product[i+j+1]+=product[i+j]/10;
				product[i+j]=product[i+j]%10;
			}
		}
	}
}
int main(){
	int na[100]={0},nb[100]={0},sum[200]={0};
	string A,B;
	cin>>A>>B;
	Rev2Int(A,na);
	Rev2Int(B,nb);
	if(A.length()>=B.length()) Mul(A.length(),sum,na,nb);
	else Mul(B.length(),sum,na,nb);	
	RevPrint(A.length()+B.length(),sum);	
}
