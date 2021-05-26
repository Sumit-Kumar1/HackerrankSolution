//Done
#include <iostream>
using namespace std;
long long int getResult(string s, long long int n){
    long long count{};
    int leng = s.length();
    for(int i{0}; i <= leng; ++i){
        if(s[i] == 'a')
            count++;
    }
    count *= n/leng;
    for(int i=0;i<n%leng; i++){
        if(s[i]== 'a')
            count++;
    }
   return count;
}
int main()
{
    long long int n{};
    string s{};
    cin>>s>>n;
    cout<<getResult(s,n);
    return 0;
}