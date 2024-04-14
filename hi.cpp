#include <iostream>
using namespace std;

int n;
int a[10];

void InKetQua()
{
    for (int i = 1; i < n; i++)
        if (a[i - 1] == 1 && a[i] == 1)
            return;
    for (int i = 0; i < n; i++)
        cout << (a[i] == 0 ? 'A' : 'B');
    cout << endl;
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n - 1)
            InKetQua();
        else
            Try(i + 1);
    }
}

int main()
{
    cin >> n;
    Try(0);
    return 0;
}