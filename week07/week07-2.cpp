///week07-2.cpp 像畫星星一樣
///TAICA交大基礎程式設計(C++) 期中考題 第6題
# include <iostream>
# include <cmath>///就是C的math.h裡面有sin() cos() abs() sqrt()
using namespace std;
int main()
{
    int n;///Part 1:Input
    cin>>n;
    for(int i=1;i<n*2;i++){///Part 2: Output
            for(int j=1;j<n*2;j++){
                ///印出來之後,發現政中心的1很有意思/有點東西!!!
                int d=max(abs(i-n),abs(j-n));
                cout<<d+1;///cout<<n
            }
        cout<<"現在i是:"<<i<<endl;///樓層的概念
    }

    ///2會有3層樓,3會有5層樓,4會有7層樓,5會有9層樓
}
