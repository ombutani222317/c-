#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << i * i;
    }
    return 0;
}