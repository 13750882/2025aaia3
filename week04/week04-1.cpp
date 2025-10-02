//week04-1.cpp 模擬題,照著題目寫程式
//LeetCode 挑戰題 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles >= numExchange){
            numBottles = numBottles - numExchange + 1;
            ans ++;
            numExchange ++;
        }
        return ans;
    }
};
