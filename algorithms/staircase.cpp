#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for(auto i = 1; i < n + 1; i++) {
        auto spaces = 0;
        for(auto j = 0; j < n - i; j++) {
            cout << " ";
            spaces++;
        }
        for(auto j = 0; j < n - spaces; j++)
            cout << "#";

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
