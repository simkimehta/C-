#include <iostream>
using namespace std;

int main()
{
int Allnumber[21];
int cntr,midcntr;
cntr = -1;
midcntr = 0;

do
{
    cntr = cntr + 1;
    cin >> Allnumber[cntr];
   // cout << Allnumber[cntr] << endl;
}
while (cntr < 21 && Allnumber[cntr] != 0);

midcntr = (cntr + 1) / 2;
cout << Allnumber[midcntr] << endl;
}

