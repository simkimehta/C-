#include <iostream>
using namespace std;

int main()
{
     int a,b,n,d,c;
     c = 0;
     d = 0;
     string s, t;
     t="";
     cin >> s >> a >> b >> n;
    do
    {
      cout << s[a];
      t = t+s[a];
      a = a + 1;
      d = d + 1;
    }
    while (d < b);
        cout << " " << endl;
    do
    {
        cout << t << endl;
        c = c + 1;
    }
    while(c < n - 1);

}
