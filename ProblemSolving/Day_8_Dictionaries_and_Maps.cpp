//done but not satisfied
//another solution include map???
//why using vp = vector<pair<string, int>> ;  not working

#include <bits/stdc++.h>
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define vp vector<pair<string, int>> 
using namespace std;
int bin_search(vp& v, int n, string name)
{
    int start{0}; int end{n};
    string temp{};
    while(start <= end){
        int mid{(start+end)/2};
        temp = v[mid].first;
        if(temp == name)
            return v[mid].second;
        
        if(temp[0] < name[0])
            start = mid+1;
        
        else
            end = mid - 1;
    }
    return 0;
}
int main()
{
    int n{};
    int num{};
    string name{};
    vp v;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>name>>num;
        v.pb(mp(name,num));
    }

    std::sort(v.begin(), v.end());

    while(cin>>name){
        int nums{bin_search(v,n,name)};
        if(nums)
            cout<<name<<'='<<nums<<'\n';
        else
            cout<<"Not found\n";
    }
    return 0;
}
