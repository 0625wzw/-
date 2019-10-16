#include <iostream>
#include <set>
/*思路：
用一个集合set存储所有人，不过如果这个朋友圈的人数是1，
那么这个人就不存入集合（朋友圈只有一个人的人直接做没有朋友圈处理）。
然后在这个集合查找要找的人，如果没有找到，就将这个人存入另一个集合set并输出，
在进行查找之前要先查找这第二个集合看这个人是否已经被输出过了。
设置一个flag，flag==1或0代表是否有人被输出，如果没有人被输出则输出No one is handsome。

知识点for me:
使用set进行存储是因为它有一个方法可以直接查找集合中的值。
以set<int> s为例：s.find(2) != s.end()代表找到了2这个元素，
s.find(2) == s.end()代表没找到，s.end()表示s的最后?个元素的下?个元素所在的位置。
*/
using namespace std;

int main(){
    int N;
    cin >> N;
    set<string>in, out;
    int k;
    string ss;
    for (int i = 0; i < N; i++){
        cin >> k;
        if (k >1){
         for (int j =0; j < k; j++){
            cin >> ss;
            in.insert(ss);
        }
        }
        else
        {
            cin >> ss;
        }
    }
    int M;
    int flag = 0;
    cin >> M;
    string s;
    for (int t = 0; t < M; t++){
        cin >>s;
        if (in.find(s)==in.end()&&out.find(s)==out.end()){//没有找到相应的元素
            if (flag ==1){
                cout << " ";
            }
            out.insert(s);
            flag =1;
            cout << s;
        }
    }
    if (flag == 0){
        cout << "No one is handsome";
    }
    return 0;
}
