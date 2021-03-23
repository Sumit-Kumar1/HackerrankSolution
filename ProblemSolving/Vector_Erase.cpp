//done
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n{};
    cin>>n;
    int a{};
    int b{};
    vector<int>v;
    //this is to take input
    for(int i=0; i< n;++i){
        int a{};
        cin>>a;
        v.push_back(a);
    }
    cin>>a;
    v.erase(v.begin()+a-1);
    cin>>a>>b;
    v.erase(v.begin()+a-1, v.begin()+b-1);
    cout<<v.size()<<'\n';
    for(auto& i : v){
        cout<<i<<' ';
    }
    return 0;
}
