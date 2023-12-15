#include<iostream>
using namespace std;
int main(){
    int num,r,d=0,base=1;
    cout<<"Enter Binary Number :\n";
    cin>>num;
    while(num>0){
        r=num%10;
        d=d+r*base;
        num=num/10;
        base=base*2;
    }
    cout<<"Decimal conversion is :"<<d;
    return 0;
}