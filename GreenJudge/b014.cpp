#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string A;
	int tmp,sum=0,num[3],max;
	stringstream ss;
	for(int i=0;i<3;i++){
		sum=0;
		getline(cin,A);
		ss.clear();
		ss.str(A);
		while(true){
			ss>>tmp;
			if(ss.fail()) break;
			sum+=tmp;
		}
		num[i]=sum;
	}
	
	max = 0;
	for(int i=0;i<3;i++){
		if(num[i]>num[max]){
			max=i;
		}
	}
	cout<<max+1<<" "<<num[max]<<endl;
}
