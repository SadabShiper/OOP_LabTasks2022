#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ara[6] = {4, 2, 10, 8, 6, 12};
    set <int> st= {3,1,5,7,9};
    vector<int> v1(11);
    merge(ara , ara + 6, st.begin(),st.end(),v1.begin());
    for(auto u : v1)
    {
        cout << u << ' ';
    }
    cout << endl;

}