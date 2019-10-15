#include <iostream>

using namespace std;

int main()
{

    int hh, mm;
    scanf("%d:%d",&hh,&mm);
    int cnt = 0;
    if (hh>12){
        cnt = hh -12;
        for (int i = 0; i < cnt; i++){
            cout <<"Dang";
        }
        if (mm > 0)
        {
            cnt++;
            cout <<"Dang";
        }
    }
    else
    {
     printf("Only %02d:%02d.  Too early to Dang.", hh, mm);
    }
    return 0;
}
