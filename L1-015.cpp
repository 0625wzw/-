#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    char c;
    cin >> c;

    int row = N/2 + N%2;
    //四舍五入计算行数
    if (N >=3&&N <= 21){
        for (int i = 1; i <=row; i++){
            for (int j = 0; j < N; j++)
            {
                cout << c;
            }
        cout << endl;
        }

        }

    return 0;
}
