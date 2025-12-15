///week02-3.cpp 使用C++2013年新版的字串stoi()功能
///
///SOIT106_ADVANCE_001 Using C++
# include <iostream>///cin  cout 讀入資料，印出資料
# include <string>///string 字串的功能在CodeBlocks裡,必須開啟Settings-Compiler....把c++11打勾勾
using namespace std;///使用[命名空間]標準的std
int main()
{
    string a;///宣告字串a
    cin>>a;///讀入字串a

    string ans;///宣告字串ans放答案用的
    int N=a.length();///字串a的長度
    for(int i=N-1;i>=0;i--){///倒過來的迴圈
        ans+=a[i];///在迴圈裡,把a[i]塞到ans的後面
    }
    cout<< a <<'+'<<stoi(ans)<<'='
        <<stoi(a)+stoi(ans) << endl;
}///stoi() is "string to int"把字串變成整數
