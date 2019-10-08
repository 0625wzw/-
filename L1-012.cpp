#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int s = 1;
    for (int i = 1; i <= N; i++){
        s = 2 * s;
    }
    cout << "2^" << N << " = " << s;
    return 0;
}