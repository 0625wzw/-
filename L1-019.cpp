#include <iostream>

using namespace std;

int main(){
      int numA, numB, n;
      cin >> numA >> numB;
      cin >> n;
      int jiahan, jiahua, yihan, yihua;
      int cntA = numA, cntB = numB;
      for(int i = 0; i < n; i++){
        cin >> jiahan >> jiahua >> yihan >> yihua;
        if (jiahan + yihan == jiahua && jiahan + yihan != yihua)//注意==或者！=要写在&&旁边
          cntA--;
        if (jiahan + yihan != jiahua   && yihua == jiahan + yihan)
          cntB--;
        if (cntA ==-1)
        {
            cout << "A" <<endl;
            cout <<numB - cntB;
            break;
        }
        if (cntB ==-1){
            cout << "B" <<endl;
            cout <<numA - cntA;
            break;
        }

      }

    return 0;
}
