#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minBoxes(vector<int>& apples, vector<int>& capacity) {
    // Sort apples in descending order
    sort(apples.rbegin(), apples.rend());

    // Sort box capacities in ascending order
    sort(capacity.begin(), capacity.end());

    int boxesUsed = 0;
    int i = 0; // Index for apples
    int j = 0; // Index for capacities

    while (i < apples.size() && j < capacity.size()) {
        if (apples[i] <= capacity[j]) {
            // Distribute apples[i] into capacity[j]
            capacity[j] -= apples[i];
            i++; // Move to the next pack of apples
            boxesUsed++; // Increment boxes used
        } else {
            // Move to the next larger capacity box
            j++;
        }
    }

    return boxesUsed;
}

int main() {
    vector<int> apples = {1, 3, 2};
    vector<int> capacity = {4, 3, 1, 5, 2};

    int result = minBoxes(apples, capacity);
    cout << "Minimum number of boxes needed: " << result << endl;

    return 0;
}