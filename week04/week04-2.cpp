//week04-2.cpp
//LeetCode 學習計畫第10題 896. Monotonic Array
//陣列很單調,只有增加 or 只有減少。不可以[又增、又減]
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0, down = 0;
        for(int i=1; i<nums.size(); i++){
            if( nums[i-1] < nums[i]) up = 1;
            if( nums[i-1] > nums[i]) down = 1;
        }
        if(up==1 && down==1) return false;
        return true;
    }
};
