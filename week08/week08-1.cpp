//week08-1.cpp LeetCode學習計畫 Matrix矩陣第一題
//1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(int i=0; i<accounts.size(); i++){//左手i
            int now = 0;//迴圈前面 now=0
            for(int j=0; j<accounts[0].size(); j++){//右手j
                now += accounts[i][j];//把錢加起來
            }//迴圈裏面 更新now陣列左手i右手j
            //迴圈後面now拿來用
            ans = max(ans,now);//最有錢的人,更新答案
        }
        return ans;
    }
};
