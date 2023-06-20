//C++ program to reverse a number..
#include<iostream>
using namespace std;
int reve(int num){
    cout<<"Reverse of the number is : ";
    while(num>0){
    int rev=0;
    int res;
    res=num%10;
    rev=rev*10+res;
    num=num/10;
    cout<<rev;
  }
}
 int main(){
     int n;
     cout<<"Enter the num i.e. you want to reverse:\n";
     cin>>n;
     reve(n);
 }
