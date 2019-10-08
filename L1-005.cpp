#include <iostream>

using namespace std;

struct student {
    string s;
    int one;
    int two;
};
int main()
{
    int N;
    cin >> N;
    student *a = new student [N];//声明N个student结构
    for (int i = 0; i < N; i++) {
        cin >> a[i].s;
        cin >> a[i].one;
        cin >> a[i].two;
    }
    int M;
    cin >> M;
        int temp;
    for (int j = 0; j < M; j++) {
        cin >> temp;
    for (int i = 0; i < N; i++){
       if (a[i].one == temp){
         cout << a[i].s << " " <<a[i].two << endl;
            break;
       }
    }
    }
    return 0;
}

