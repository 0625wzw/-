#include <iostream>

using namespace std;
bool func(string a);
int main()
{
    int N;
    cin >> N;
    int flag =0;
    for (int i = 0; i < N; i++){
        string a;
        cin >> a;
        bool c = func(a);//c为true 或者false
        if (c){//return false为结束执行，否则继续执行，即在本程序中如果c不为false，那就继续执行，然后
                //将flag=1，意思是还没有执行完，如果执行完了，c为false

            flag = 1;
        }
    }
    if (flag == 0)
        cout << "All passed";
    return 0;
}

bool func(string s){

    int sum = 0;
    int a[18];
    for (int i = 0; i < 18; i++){
        a[i] = s[i] - '0';//将字符转换为数值

        }
    if (s[17] == 'X'){
        a[17] = 10;
    }
    int b[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    for (int j = 0; j < 17; j++){
        sum = sum +a[j]*b[j];
    }
    sum = sum % 11;
    int c[11] ={1, 0, 10, 9, 8, 7, 6, 5, 4, 3, 2};
    if (c[sum]!=a[17]){
    for (int i=0;i<17;i++){
        cout << s[i];
    }
     if (a[17]!= 10)
     {
         cout << a[17]<<endl;
     }
     else
        cout << "X"<<endl;
     return true;
        }


    return false;
}
