#include<iostream>
#include<string>
using namespace std;
class Rearrange{
    private:
    int count=0;
    string str;
    public:
    void input(){
        cout<<"Enter the string:\n";
        cin>>str;
        for(int i=0;i<str.length();i++){
            if(str[i]=='0' || str[i]=='5'){
                count++;
            }
        }
    }
      void output(){
        if(count>0){
            cout<<"Yes it can make multiple of five:\n";
        }
        else{
            cout<<"No,it's not multiple of five:\n";
        }
      }
};
int main() {
    Rearrange ob;
    ob.input();
    ob.output();
    return 0;
}