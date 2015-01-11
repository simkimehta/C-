#include <iostream>
using namespace std;

int main()
{
    string s,t;
    t= "";
    cin >> s;
    int n, theLength = s.length(),v;
    cin >> n;
    v = 0;

    do
    {
        cout << s[theLength];
        t = t + s[theLength];
        theLength = theLength - 1;
    }
    while(theLength != -1);
    cout << " " << endl;

    do
    {
        cout << t << endl;
        v = v + 1;
    }
    while(v < n - 1);
}
