#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    int x= rand () % 101 + 1;
    int y, z;
     y = 0;
     z = 0;
    do
    {
        cin >> y ;
        z = z + 1;
        if(x > y )
        {
            cout << "More than " << y << endl;
        }
        else if(x < y )
        {
            cout << "Less than " << y << endl;
        }
        else
        {
            cout << y << " is correct!!" << endl;
        }
       // cout << "z" << endl;
    }
    while(x != y);
}
