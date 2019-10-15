#include <iostream>

using namespace std;
bool func(string a);
int main()
{
    string s;
    cin >> s;
    int cmt = 0;
    int len = s.length();
    int flag = (s[0]=='-'?1:0);
    int bit = len - flag;
    for (int i=0;i<len;i++){
        if (s[i] =='2')
        {
            cmt++;
        }
    }
    double sum = (double)cmt / bit *100;
    if (flag ==1)
        sum = sum *1.5;
    if (s[len - 1]%2==0)
        sum =sum *2;
    printf("%.2f%%",sum);
}