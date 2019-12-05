#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    auto ret = -std::numeric_limits<int32_t>::min();
    // Every array element except the outside border can
    // an hourglass created from it, so iterate from [1-(size-1)]
    // and test each one.
    for(auto i = 1; i < arr.size() - 1; i++) {
        for(auto j = 1; j < arr[i].size() - 1; j++) {
            
            auto sum = arr[i][j];

            sum += arr[i-1][j-1];
            sum += arr[i-1][j];
            sum += arr[i-1][j+1];

            sum += arr[i+1][j-1];
            sum += arr[i+1][j];
            sum += arr[i+1][j+1];

            if(sum > ret)
                ret = sum;
        }
    }

    return ret;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
