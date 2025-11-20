//week11-3.cpp 學習計畫 Math 第三題
//LeetCode 860. Lemonade Change
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int d5 = 0, d10 = 0, d20 = 0;//三種鈔票
        for (int bill : bills){//C++進階 for迴圈
            if(bill==5) d5++;//順利拿到五元鈔票
            if(bill==10){//客人給你10元鈔票,你要找5元鈔
                if(d5 < 1) return false;//沒有5元鈔,失敗
                d10++;//拿到10元鈔
                d5--;//找出5元鈔
            }
            if(bill==20){//客人給你20元鈔,要找15元鈔
                if(d10>0 && d5>0){
                    d20++;
                    d10--;
                    d5--;
                }else if(d5>=3){//找不開,失敗
                    d20++;
                    d5 -= 3;
                }else return false;
            }
        }
        return true;//順利買光,成功
    }
};
