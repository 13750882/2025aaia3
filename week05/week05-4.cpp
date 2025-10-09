//week05-4.cpp
//LeetCode 學習計畫 Built-In Function 第二題 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0; i<s.length(); i++){
            s[i] = tolower( s[i] );
        }
        return s;
    }
};
