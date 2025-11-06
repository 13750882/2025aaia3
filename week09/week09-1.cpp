//week09-1a.cpp
//SOIT106_ADVANCE_004
# include <iostrem>
# include <cctype>
using namespace std;

int main()
{
    char c;
    while( cin >> c){ c= toupper(c);
    if(isupper(c)) c = toupper(c);
    cout << c;
    }
    cout <<"\n";
}
