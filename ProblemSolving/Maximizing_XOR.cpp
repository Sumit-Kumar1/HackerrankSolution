//done

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	
    int l{};
    int r{};
    cin>>l>>r;
    int res_max{0};
 
    for (int i = l; i <= r; i++)
    {
        for(int j = i+1; j<= r; ++j){
            res_max = max(res_max, i^j);
        }
    }
    
    cout<<res_max;
    return 0;
}