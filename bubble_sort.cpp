//Implementation of bubble sort using c++
#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the number of element that you want to give in the array :\n";
    cin>>n;
    int array[n];
    cout<<"Enter "<<n<<" element in the array :\n";
    for(i=0;i<n;i++){
    cin>>array[i];
    }
    int counter=1;
    while(counter<n){
        for(i=0;i<n-counter;i++){
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        counter++;
    }
    cout<<"Array in sorted order is :\n";
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
        cout<<endl;
    }
}