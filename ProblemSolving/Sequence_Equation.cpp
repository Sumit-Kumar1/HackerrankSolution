//done
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	
    int n{};
    cin>>n;
    int val{};

    unordered_map<int, int>arr;
    for(int i = 1; i <= n; ++i){
        cin>>val;
        arr[val] = i;
    } 

    for(int i = 1; i <= n; ++i){
        auto val = arr.find(i);
        cout<<arr[val->second]<<'\n';
    }

    return 0;
}