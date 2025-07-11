#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    while (cin >> N && N) {
        vector<string> strings(N);
        for (int i = 0; i < N; i++) {
            cin >> strings[i];
        }

        // Sort strings by length in ascending order
        sort(strings.begin(), strings.end(), [](const string &a, const string &b) {
            return a.length() < b.length();
        });

        // dp[i] = length of longest sequence ending at string i
        vector<int> dp(N, 1);
        int maxLength = 1;

        for (int i = 1; i < N; i++) {
            for (int j = 0; j < i; j++) {
                // Check if strings[j] is a substring of strings[i]
                if (strings[i].find(strings[j]) != string::npos) {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
            maxLength = max(maxLength, dp[i]);
        }

        cout << maxLength << endl;
    }

    return 0;
}