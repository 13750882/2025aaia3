//week04-3.cpp
//LeetCode �ǲ߭p�e��7�D 66. Plus One
//1 2 3
//    4 �̥k��}�l, +1 ����
//4 3 2 1
//      2 �̥k��}�l,+1 ����
//9 4 9
//    0 ���i��, ����? ���i�Hreturn�~��
//  5 �̥k�� +1����
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N =digits.size();
        for (int i=N-1; i>=0; i--){
            if (digits[i]==9){
                digits[i] = 0;
            } else {
                digits[i]++;
                return digits;
            }
        }
        digits.insert( digits.begin(),1);
        return digits;
    }
