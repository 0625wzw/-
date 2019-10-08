#include <iostream>

using namespace std;

int main()
{
    int N;
    int S = 1;
    int s1 = 1;
    cin >> N;
    for (int i = 2; i <= N; i++){
        s1 = i * s1;
        S += s1;
    }
    cout << S;
    return 0;
}