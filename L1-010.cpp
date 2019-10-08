#include <iostream>

using namespace std;
void Swap(int *x, int *y){
    int temp = *y;
    *y = *x;
    *x = temp;
}
int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    if (b > c)
    {
        Swap(&b, &c);
    }
    if (a > b){
        Swap(&a, &b);
    }
    if (b > c)
    {
        Swap(&b, &c);
    }
    cout << a << "->" << b << "->" << c;
    
    return 0;
}