#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int M;
    cin >> M;
    vector<int> B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    int X;
    cin >> X;
    A.insert(A.begin() + X, B.begin(), B.end());
    int store_long_size_of_A = A.size();

    // final array print A
    for (int i = 0; i < store_long_size_of_A; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
