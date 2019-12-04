#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    tm time;

    strptime(s.c_str(),"%I:%M:%S%p", &time);
    char time_str[255];

    sprintf(time_str, "%02i:%02i:%02i", time.tm_hour, time.tm_min, time.tm_sec);
    return string(time_str);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
