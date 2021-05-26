#include <bits/stdc++.h>
using namespace std;
//if class is cancelled say YES else NO.
string angryProfessor(int k, vector<int>a)
{
    int count{};
    for(auto& i : a){
        if(i <= 0)
            count++;
    }
    if(count < k)
        return "YES";
    else
        return "NO";
}

int main()
{
    int n{1};
    cin>>n;
    while(n--){
        int a{}; int b{};
        cin>>a>>b;
        vector<int>v;
        for(int i=0;i<a;++i){
            int c{};
            cin>>c;
            v.push_back(c);
        }
        cout<<angryProfessor(b,v);
        cout<<endl;
    }
    return 0;
}