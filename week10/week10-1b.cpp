//week10-1b.cpp寫兩次,第一次,用for迴圈,第二次用數學
//1523. Count Odd Numbers in an Interval Range
//從low...high裡面有幾個odd奇數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) / 2;
        if(high%2==1||low%2==1)ans++;
        return ans;
    }
};
