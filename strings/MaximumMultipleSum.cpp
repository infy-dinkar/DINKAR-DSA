#include <iostream>
#include <vector>
using namespace std;

int main() {
    int dingu;
    cin >> dingu;
    vector<int> results;

    for (int i = 0; i < dingu; ++i) {
        int n;
        cin >> n;
        
        int optimalX = 2;
        int maxSum = 0;

        for (int x = 2; x <= n; ++x) {
            int k = n / x;
            int currentSum = x * (k * (k + 1)) / 2;

            if (currentSum > maxSum) {
                maxSum = currentSum;
                optimalX = x;
            }
        }

        results.push_back(optimalX);
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
