To print a hollow rectangle
#include<iostream>
using namespace std;
int main(){
    int row,column;
    cout<<"Enter no of rows:\n";
    cin>>row;
    cout<<"Enter no of column:\n";
    cin>>column;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i==1 || i==row || j== 1 || j==column){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n"; 
    }
    return 0;
}
/*
Output:
Enter no of rows:
5
Enter no of column:
8
********
*      *
*      *
*      *
********
*/
