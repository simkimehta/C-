#include<iostream>
using namespace std;

int main()
{
    string s;
    int a,b,n;
    cin >> s >> a >> b >> n;
    s = s.erase(a,b);

    for(int counter = 1; counter <= n; ++counter)
    {
        cout << s << endl;
    }
}
