#include <bits/stdc++.h>
using namespace std;
//done
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	
    int n{};
    cin>>n;
    long a{};
    long b{4294967295};
    while(n--){
        cin>>a;
        cout<<(b-a)<<endl;
    }
    return 0;
}