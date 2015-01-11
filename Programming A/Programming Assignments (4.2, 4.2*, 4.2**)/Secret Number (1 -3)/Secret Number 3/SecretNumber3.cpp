#include <iostream>
using namespace std;

int main()
{
    int low,ga,high,vl,j,cnt;
    low = 1;
    ga = 50;
    high = 101;
 //   cnt= 0;

    cout << 50 << endl;
    do
    {
       // b= b+1;
        cin >> vl;
        if (vl == 1)
        {
            low = ga;
            j = ga;
            ga = (ga + high) / 2;
        }
        else if (vl == -1)
        {
            high = ga;
            ga = (high + j)/2;
        }
        else
        {
            cout << "Great number! It was really hard to get!" << endl;
          //  b = b-1;
        }
        cout << ga << endl;

    }
        while (vl != 0);
 //   cout << cnt << endl;
}
