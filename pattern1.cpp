//To print a rectangle pattern by taking input from the user
#include<iostream>
using namespace std;
int main(){
    int rows,column;
    cout<<"Enter value of rows:\n";
    cin>>rows;
    cout<<"Enter value of columns:\n";
    cin>>column;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=column;j++){
            cout<<" * ";
        }
        cout<<"\n";
    }
    return 0;
}
/*
Output:
Enter value of rows:
5
Enter value of columns:
7
 *  *  *  *  *  *  * 
 *  *  *  *  *  *  * 
 *  *  *  *  *  *  * 
 *  *  *  *  *  *  * 
 *  *  *  *  *  *  * 
 */
