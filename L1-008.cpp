#include <iostream>

using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    int Sum = 0;
    int temp = A;
    while (temp <= B){
        for (int i = 0; i < 5&&temp <= B; i++){
            printf("%5d",temp);
            Sum+=temp;
            temp++;
        }
        cout << endl;

    }
    cout <<"Sum = " <<Sum;
    return 0;
}
