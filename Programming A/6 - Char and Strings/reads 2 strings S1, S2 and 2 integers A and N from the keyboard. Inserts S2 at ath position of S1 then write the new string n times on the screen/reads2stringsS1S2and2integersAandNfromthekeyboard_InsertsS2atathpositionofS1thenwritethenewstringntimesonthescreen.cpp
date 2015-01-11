#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    int a, n;

    cin >> s1 >> s2 >> a >> n;
    s1 = s1.insert(a, s2);

    for(int counter = 1; counter <= n; ++counter)
    {
        cout << s1 << endl;
    }
}
