//done all passed. 20/04/21
#include <bits/stdc++.h>
using namespace std;
int strongPassword(int n, string s){
    int a[4]{};
    int count{};
    
    for(int i=0;i<n;++i){
        if(s[i]>=65 && s[i] <= 90) // upper case letters
            a[0]++;
        else if(s[i] >= 48 && s[i] <= 57) // numeric values.
            a[1]++;
        else if(s[i] >= 97 && s[i] <= 122) // lower case letters.
            a[2]++;
        else
            a[3]++;
    }
    for(int i=0;i<4;++i){
        if(a[i] == 0)
            count++;
    }
    if(n >= 6)
        return count;
    else
        return std::max(count, 6-n);
}
int main()
{
    int n{};
    string s;
    cin>>n>>s;
    int res{strongPassword(n, s)};
    cout<<res;
    return 0;
}
