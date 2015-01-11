#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n > 20)
    {
        cout << "Lesser than 20." << endl;
    }
    else
    {
        int m[n];
        int d;
        d = 0;
        do
        {
            cin >> m[d];
        //    cout << m[d] << endl;
            if(m[d] % 3 == 0 || m[d] % 5 == 0)
            {
                cout << m[d] << endl;
            }
            d = d + 1;
        }
        while (d < n);
    }
}
