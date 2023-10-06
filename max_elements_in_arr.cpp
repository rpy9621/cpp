// C++ program to find maximum elements in array :
#include<iostream>
using namespace std;
int main(){
  int size,i;
  cout<<"Enter the size of the array:\n";
  cin>>size;
  int arr[size],max;
  cout<<"Enter "<<size<<" elements in array:\n";
  for(i=0;i<size;i++){
  cin>>arr[i];
  }
  cout<<"Max elements of the array is:\n";
  for(i=0;i<size;i++){
  if(arr[i]>max){
  max=arr[i];
    }
  }
  cout<<"Max element of the array is : "<<max;
  return 0;
  }
  
