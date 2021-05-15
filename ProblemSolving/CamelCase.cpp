//done

#include <iostream>
using namespace std;
int main()
{
    string s{};
    int count{1};
    cin>>s;
    for(int i=0; i<s.length(); ++i){
        int letter{static_cast<int>(s[i])};
        if(letter >= 65 && letter <= 90)
            count++;
        else 
            continue;
    }
    cout<<count;
    return 0;
}