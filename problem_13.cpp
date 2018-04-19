#include<iostream>
#include<vector>
#include <algorithm>
#include <unistd.h>
using namespace std;

int main(){
	
std::vector<string> string_of_numbers;
std::vector<int> v;
// string s;
int sum=0;

	for(int i=0;i<100;i++){
		string s;
		cin>>s;
		string_of_numbers.push_back(s);
	}
	for(int j=49;j>=0;j--){
		for(int i=0;i<100;i++){
			const char a=string_of_numbers[i][j];
			cout<<"a : "<<a<<" ";
		sum = sum + string_of_numbers[i][j]-48;
		cout<<"sum : "<<sum<<endl;
	}
	v.push_back(sum%10);
	cout<<" sum % 10 : "<<(sum%10);
	sum=(int)(sum/10);
	cout<<" sum / 10 : "<<sum;
	cout<<endl<<endl<<endl;
	}
	for(int i=v.size()-1;i>v.size()-11;i--){
		cout<<v[i];

	}
	cout<<endl<<sum;
	
	
// cout<<string_of_numbers.size();


}