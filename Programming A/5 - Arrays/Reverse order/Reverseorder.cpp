#include <iostream>
using namespace std;

int main()
{
    int n,b;
    cin >> n;
    if(n > 20)
    {
        cout << "Sorry but your number needs to be less than or equal to 20." << endl;
    }
    else
    {
        int numbers[n];
        do
        {
          cin >> numbers[b];
          b = b + 1;
        }
        while(b != n);
        do
        {
          b = b -1;
          cout << numbers[b] << endl;
        }
        while(b > 0);
    }

}
