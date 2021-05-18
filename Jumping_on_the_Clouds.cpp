//done

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	
    
    int n{};
    cin>>n;
    int arr[n]{};
    for(int i{0}; i < n; ++i){
        cin>>arr[i];
    }

    int steps{};
    int i{};
    while(i < n-1){
        if(arr[i+2] == 0){
            i += 2;
        }else{
            i+=1;
        }
        steps++;
    }
    cout<<steps;

    return 0;
}