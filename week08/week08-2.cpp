//week08-2.cpp LeetCode學習計畫 Martix矩陣第四題
//73. Set Matrix Zeroes
//要小心,不能一邊讀,一邊設成0、要兩階段 先讀完、再設0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //第一階段,先讀完,記下全部的零對應的i和j
        int M = matrix.size(), N = matrix[0].size();//左手M,右手N
        vector<int> markI(M,0), markJ(N,0);
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(matrix[i][j]==0){
                    markI[i] = 1;
                    markJ[j] = 1;
                }
            }
        }
        //第二階段,再照著markI和markJ的標記,把整條都清為0
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(markI[i]==1 ||markJ[j]==1) matrix[i][j] = 0;
            }
        }
    }
};
