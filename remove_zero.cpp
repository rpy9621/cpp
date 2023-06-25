//o(n) Time Complexcity
//o(1) Space Complexcity
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>v;
        int a=nums.size();
        int f=0;
        for(int i=0;i<a;i++){
            if(nums[i]!=0){v.emplace_back(nums[i]);}
        }
        for(int i=0;i<a;i++){
            if(nums[i]!=0){
                f=1;
                break;
            }
        }
        if(f==0){
            
        }
        else {
        nums.clear();
        for(int i=0;i<v.size();i++){
            nums.emplace_back(v[i]);
        }
        int b=a-v.size();
        for(int i=0;i<b;i++){
            nums.emplace_back(0);
        }
        }
        
    }
};
