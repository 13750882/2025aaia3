//week04-1.cpp �����D,�ӵ��D�ؼg�{��
//LeetCode �D���D 3100. Water Bottles II
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
