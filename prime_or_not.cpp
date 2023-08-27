//C++ program to check prime or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no to check it prime or not:\n";
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non_prime:\n";
            break;
        }
    }
        if(i==n){
            cout<<"Prime_number:\n";
        }
}
