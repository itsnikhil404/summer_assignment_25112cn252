#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int>& position, int m, int mid) {
    int cowCount = 1;
    int lastPosition = position[0];

    for (int i = 1; i < position.size(); i++) {
        if (position[i] - lastPosition >= mid) {
            cowCount++;

            if (cowCount == m) {
                return true;
            }

            lastPosition = position[i];
        }
    }

    return false;
}

int maxDistance(vector<int>& position, int m) {
    sort(position.begin(), position.end());

    int s = 0;
    int e = position.back() - position.front();
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (isPossible(position, m, mid)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}

int main() {
    vector<int> position = {1, 2, 3, 4, 7};
    int m = 2;

    cout << maxDistance(position, m) << endl;

    return 0;
}