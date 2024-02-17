#include<iostream>
using namespace std;
int Binary_Search(int arr[],int n,int key){
  int s=0;
  int e=n;
  while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]>key){
      e=mid-1;
  }
    else{
      s=mid+1;
    }
  }
    return -1;
  
}
int main(){
  int n;
  cout<<"Enter size of array :\n";
  cin>>n;
  int arr[n],i;
  cout<<"Enter "<<n<<" element's in array :\n";
  for(i=0;i<n;i++){
    cin>>arr[i];
  }https://www.onlinegdb.com/online_c++_compiler#tab-stdin
  int key;
  cout<<"Enter value of key :\n";
  cin>>key;
  cout<<Binary_Search(arr,n,key);
}
