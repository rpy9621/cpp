// C++ program to to count sum of digits
#include<iostream>
using namespace std;
int main(){
  int num,count=0;
  cout<<"Enter a number :\n";
  cin>>num;
  while(num>0){
  num=num/10;
  count++;
  }
cout<<"Sum of digits is : "<<count;
return 0;
}

