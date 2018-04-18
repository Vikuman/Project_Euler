#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long n;
	cin>>n;
	long temp = n;
	for(long i=2;i<((int)pow(n,0.5));i++){
		// cout<<"i ; "<<i<<endl;
		while(temp%i==0){
			temp = temp/i;
			cout<<"i : "<<i<<endl;
			cout<<"temp ; "<<temp<<endl;
			break;

		}
		// cout<<"temp ; "<<temp<<endl;

	}
}