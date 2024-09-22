#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    // Loop through for each row
    for (int i = 0; i < N; i++)
    {
        // Loop through for each column
        for (int j = 0; j < N; j++)
        {
            if (i == j && i == N / 2)
            {
                cout << 'X';
            }
            else if (i == j)
            { // left
                cout << '\\';
            }
            else if (i + j == N - 1)
            { // right
                cout << '/';
            }
            else
            {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
