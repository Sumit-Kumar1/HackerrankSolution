// e == 100, e-= 1 => for jumping on cloud, start from zero.
// hoping on c[(i+k)%n] == 1 then e -= 2,
// end when c[i] == 0
// submitted and done
#include <bits/stdc++.h>
#include <bitset>
using namespace std;

int jumpingOnClouds(vector<int>& nums, int k){
    int energy{100};
    int n = nums.size();
    int i{0};
    while(true){
        if(nums[i] == 1)
            energy -= 3;
        else
            energy -= 1;

        i = (i+k)%n;
        if(i == 0)        
            break;
    }
    return energy;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);	
    int n{};
    int k{};
    cin>>n>>k;
    vector<int>nums(n,0);
    for(int i{0}; i< n; i++){
        cin>>nums[i];
    }
    int energy{jumpingOnClouds(nums, k)};
    cout<<energy;
    return 0;
}