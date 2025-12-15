///week07-1.cpp
///TAICA交大基礎程式設計(C++) 期中考題 第2題
# include <iostream>
using namespace std;
int main()
{
    int x1,x2,x3,x4;///x座標
    int y1,y2,y3,y4;///y座標
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    int ans=0;
    for(int x=x1;x<x2;x++){///依序檢查第一個長方形
        for(int y=y1;y<y2;y++){///的每一個格子
            if(x3<=x && x<x4 && y3<=y && y<y4) ans++;
        }///看這個個子,是不是在第二個長方形裡面
    }///注意:在電腦/數學裡,習慣左邊包含右邊不含
    cout<<ans;
}
