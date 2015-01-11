#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n > 20)
    {
        cout << "less than 20." << endl;
    }
    else
    {
        int firstarray[n];
        int d,a,b;
        a = -1;
        d = 0;
        b = 0;
        do
        {
            cin >> firstarray[d];
            d = d + 1;
        }
        while(d < n);
        do
        {
i            a = a + 1;
            d = d - 1;
            if (firstarray[a] = firstarray[d])
            {

            }
        }
        while(d > 0);

    }

}
