//done

#include <iostream>
#include <cmath>

using namespace std;

int result(int n){
    int shared{5};
    int liked{};
    int cummulative{};
    for(int i=1;i<=n;i++){
        liked = floor(shared/2);
        cummulative += liked;
        shared = floor(shared/2)*3;
        
    }
    return cummulative;
}
int main()
{
    int n{};
    cin>>n;
    cout<<result(n);
    return 0;
}