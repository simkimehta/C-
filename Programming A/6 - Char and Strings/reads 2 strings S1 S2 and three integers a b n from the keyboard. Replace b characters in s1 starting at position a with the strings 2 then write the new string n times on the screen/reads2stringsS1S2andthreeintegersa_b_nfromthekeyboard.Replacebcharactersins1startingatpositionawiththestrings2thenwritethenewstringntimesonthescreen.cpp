#include <iostream>
using namespace std;

int main()
{
    string s1,s2;
    int a,b,n;
    cin >> s1 >> s2 >> a >> b >> n;

    s1 = s1.replace(a,b,s2);
    for(int counter = 1; counter <= n; ++counter)
    {
        cout << s1 << endl;
    }
}
