#include <bits/stdc++.h>
using namespace std;

int fibb(int n)
{
    if (n <= 1)
        return n;
    return fibb(n - 1) + fibb(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibb(n);
    return 0;
}