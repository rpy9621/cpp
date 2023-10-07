#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"Enter any alphabet :\n";
	cin>>c;
	if(c>='a' && c<='z' || c<='A' && c>='Z'){
		cout<<c<<" is an alphabet \n";
	}
	else{
		cout<<c<<" is not an alphabet \n";
	}
	return 0;
}
