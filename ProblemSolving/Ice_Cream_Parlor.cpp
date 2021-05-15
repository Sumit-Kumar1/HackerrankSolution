#include <bits/stdc++.h>
using namespace std;
int binaryS(int arr[], int n, int cost){
    int start{0};
    int end{n};
    int mid{(start+end)/2};
    while(start <= end){
        if(arr[mid]==cost)
            return mid;
        
        if(arr[mid] < cost)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
int main()
{
    int t{1};
    cin>>t;
    while(t--){
        int k{}; 
        int n{};
        cin>>k>>n;
        int arr[n];
        for(int i=0;i<n;++i)
          cin>>arr[i];

        std::sort(arr, arr+n);
        
        int a{binaryS(arr, n, k)};
        a = arr[a-1];
        int b{binaryS(arr, n, k-a)};
        b = arr[b];
        cout<<b<<" "<<a<<endl;
    }
    return 0;
}