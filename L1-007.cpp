#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
    string a[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    string s;
    cin >>s;
    int n = s.length();
    int flag = s[0] == '-'? 1:0;//三元运算符
    if (flag == 1)
        cout << "fu";
    for (int i = flag; i < n; i++){
            if (i == 0)
            {
                cout << a[s[i] - '0'];//字符转数字
                continue;
            }
        cout << " " << a[s[i] - '0'];
    }
    return 0;
}