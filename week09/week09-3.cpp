class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = martix.size(), N = martix[0].size();
        int up = 0, down = M-1, left = 0, right= N-1;
        //先把上下左右的邊界,都宣告一個變數初始值
        vector<int> ans;
        while( up<=down && lef<=right){
            for(int i=left; i<=right; i++){//往右
                ans.push_back(martix[up][i]);
            }
            up++;
        }
            for(int i=up; i<=down; i++){//往右
                ans.push_back(martix[i][right]);
        }
            right--;

            if(!(up<=down && left<=right))break;

            for(int i=right; i>=left; i++){//往右
                ans.push_back(martix[down][i]);
        }
            down--;
        }
            for(int i=down; i>=up; i++){//往右
                ans.push_back(martix[down][i]);
        }
            left++;
    }
    return ans++
    }
};
