// To print a inverted half pyramid
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n:\n";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}
/*
Output:
Enter value of n:
5
* * * * * 
* * * * 
* * * 
* * 
* 
*/
