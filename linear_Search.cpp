//C++ program for linear search
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int i,n,key;
    cout<<"Enter no of element that you want to inset in the array :\n";
    cin>>n;
    int array[n];
    cout<<"Enter "<<n<<" element in array :\n";
    for(i=0;i<n;i++){
        cin>>array[i];
    }
     for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    //for linear search
    cout<<"Enter the element that you want to search in this array :\n";
    cin>>key;
    for(i=0;i<n;i++){
        if(array[i]==key){
            cout<<"Element is present in this array and element is : "<<array[i]<<" Whose index is : "<<i;
            return 0;
        }
    }
    cout<<"Not present :";
    return 0;
}