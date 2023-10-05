// C++ program to display "Sum of Array Elements "

#include <iostream>
using namespace std;
int main() {
   int n,i;
   cout<<"Enter the number of elemnts in arr: \n";
   cin>>n;
   int arr[n];
   int sum=0;
   cout<<"Enter "<<n<<" elements in array:\n";
   for(i=0;i<5;i++){
       cin>>arr[i];
   }
   cout<<"Entered elements in array is :\n";
    for(i=0;i<5;i++){
       cout<<arr[i]<<" ";
      // sum=sum+arr[i];
   }
    for(i=0;i<5;i++){
      // cout<<arr[i]<<" ";
       sum=sum+arr[i];
   }
   cout<<"Sum of array elements is : "<<sum<<" ";
    return 0;
}
