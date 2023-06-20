#include<iostream>
using namespace std;
class Two_Sum{
   private:
   int n,i,j,target,arr[];
   public:
   void put_data(){
    cout<<"Enter the number of term you want to insert in array:\n";
    cin>>n;
    cout<<"Enter "<<n<<" element in the array:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
   }
   void show_data(){
    // cout<<"Enter the value of target:\n";
    // cin>>target;
    cout<<"Given array is:\n";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Enter the value of target:\n";
    cin>>target;
     for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
        if(arr[i]+arr[j]==target){
            cout<<"Target is found and it's indices is \n";
            cout<<i<<" "<<j;
        }
      }
    }
   }
};
 int main(){
    Two_Sum ob;
    ob.put_data();
    ob.show_data();
 }