#include<iostream>
using namespace std;
void func(){
    int num,r,b=0,base=1;
    cout<<"Enter the decimal number to convert it into on binary :\n";
    cin>>num;
    while(num>0){
    r=num%2;
    b=b+r*base;
    num=num/2;
    base =base*10;
}
    cout<<"Binary number is : "<<b;
}
int main(){
    func();
}