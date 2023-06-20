#include<iostream>
using namespace std;
class fibonacci{
    private:
    int a,b,res,i,n;
    public:
    void get_data(){
        a=0;
        b=1;
        cout<<"Enter the limits of fibonacci series :\n";
        cin>>n;
    }
    void put_data(){
        cout<<"Fibonacci series is:\n";
        for(i=0;i<n;i++){
            if(i<=1){
                res=i;
            }
            else{
                res=a+b;
                a=b;
                b=res;
            }
            cout<<res<<" ";
        }
    }
  
};
      int main(){
        fibonacci obj;
        obj.get_data();
        obj.put_data();
        return 0;
      }