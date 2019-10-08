#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    string a;
    getline(cin,s);
    getline(cin,a);
    int book[200];
    for (int i= 0; i < a.length(); i++)
    {
        book[a[i]] = 1;

    }
    for (int j = 0; j < s.length(); j++){
        if (book[s[j]] == 1)
            continue;//continue作用是如果s[j]==1，则跳过继续循环，直到它不等于1，输出
        cout << s[j];
    }

    return 0;
}