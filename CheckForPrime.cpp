#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0; // Already at the last index
        if (arr[0] == 0) return -1; // Cannot move anywhere

        int maxReach = arr[0]; // Farthest index we can reach
        int steps = arr[0];    // Steps left in the current jump
        int jumps = 1;         // Number of jumps taken

        for (int i = 1; i < n; i++) {
            if (i == n - 1) return jumps; // Reached the end
            
            maxReach = max(maxReach, i + arr[i]); // Update max reachable index
            steps--; // Use one step

            if (steps == 0) { // Need to jump
                jumps++;
                if (i >= maxReach) return -1; // Not possible to move forward
                steps = maxReach - i; // Reset steps for the next jump
            }
        }

        return -1; // If end is not reachable
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    int result = obj.minJumps(arr);

    if (result != -1)
        cout << "Minimum number of jumps to reach the end: " << result << endl;
    else
        cout << "End of the array is not reachable." << endl;

    return 0;
}

