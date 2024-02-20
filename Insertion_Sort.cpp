// Insert an element from unsorted array to it's current position in sorted array
// It start sorting from 2 element
// It break the array into two parts like sorted or unosorted
#include<iostream>
using namespace std;
int main(){
  int n,i;
  cout<<"Enter size of array :\n";
  cin>>n;
  cout<<"Enter "<<n<<" elements in array :\n";
  int arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  for(i=1;i<n;i++){
    int current=arr[i];
    int j=i-1;
    while(arr[j]>current && j>=0){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=current;
  }
  cout<<"Sorted array is :\n";
  for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
