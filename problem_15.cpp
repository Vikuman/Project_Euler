#include<iostream>
using namespace std;
long long combinatorials(int n,int r){
	if (r==n)
	{
		return 1;
	}
	if(r==1){
		return n;
	}
	

	return combinatorials(n-1,r) + combinatorials(n-1,r-1);
	


}
// long long int factorial(long long int a){

// 	if(a==21){
// 		return 21;
// 	}
// 	if(a==2){
// 		return 2;
// 	}
// 	return a*factorial(a-1);
// }
int main(){
	long long int n=40,c=20;
	// cin>>n>>c;
	// long long int a=factorial(n);
	// cout<<"a : "<<a;
	// long long int b=factorial(c);
	// // long long int d=factorial(n-c);
	// long long int k= b;
	// long long int l=a/k;

	cout<<combinatorials(n,c);
}