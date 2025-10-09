///week05-3c.cpp Part1:Input,Part2:Output
///CPE 第二題 UVA 483 倒過來
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line;
    while ( getline(cin, line)){
        stringstream ss (line);
        string word;
        ss >> word;
        reverse( word.begin(), word.end() );
        cout << word;
        while (ss >> word){
            reverse( word.begin(), word.end() );
            cout << " " << word;
        }
        cout << line << endl;
    }
}
