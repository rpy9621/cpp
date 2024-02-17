// Find max and min in array:
#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n,i;
  cout<<"Enter the size of array : ";
  cin>>n;
  int arr[n];
  cout<<"Enter "<<n<<" element's in array : ";
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  int max_No=INT_MIN;
  int min_No=INT_MAX;
  for(i=0;i<n;i++){
    if(arr[i]>max_No){
      max_No=arr[i];
    }
    if(arr[i]<min_No){
      min_No=arr[i];
    }
  }
  cout<<"The max element's is : "<<max_No;//for this we have to use #include<climits>
  cout<<"The min element's is : "<<min_No;//otherwise we have use max_No=arr[0] and min_No=arr[0] 
}
