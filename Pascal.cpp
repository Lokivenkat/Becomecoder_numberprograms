#include<iostream>
using namespace std;
int main()
{
    int r;
    cout << "Enter the number of rows : "<<endl;
    cin >> r;
    cout<< "PASCAL TRIANGLE :";
    for (int i = 0; i < r; i++)
    {
        int val = 1;
        
        for (int j = 1; j < (r - i); j++)
        {
            cout << "   ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "      " << val;
            val = val * (i - k) / (k + 1);
        }
        cout << endl << endl;
    }
    cout << endl;
    return 0;
}

