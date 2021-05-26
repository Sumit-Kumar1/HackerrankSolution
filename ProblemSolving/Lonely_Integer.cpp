//done and submitted.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	
    int n{};
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    unsigned int res{0};
    for (int i = 0; i < n; i++){
        res ^= arr[i];
    }
    cout<<res;
    return 0;
}