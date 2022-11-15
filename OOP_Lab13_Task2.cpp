#include <bits/stdc++.h>
using namespace std;
namespace my_namespace
{
    string a = "sadab";

}
namespace my_namespace_2
{
    string a = "Dipto";

}
int main()
{
    string a = "shiper";
    cout << "from main : " << a << endl;
    cout << "from my_namespace_1 : " << my_namespace :: a << endl;
    cout << "from my_namespace_2 : " << my_namespace_2 :: a << endl;
}