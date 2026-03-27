// Leetcode-452 Maximun number arrows to burst Balloons

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int findMinArrowShots(vector<vector<int>> &points)
    {
        sort(begin(points), end(points));
        int n = points.size();
        int count = 1;
        vector<int> prev = points[0];

        for (int i = 1; i < n; i++)
        {
            int currStart = points[i][0];
            int currEnd = points[i][1];

            int prevStart = prev[0];
            int prevEnd = prev[1];

            if (currStart > prevEnd)
            { // No Overlapping
                prev = points[i];
                count++;
            }
            else
            { // Possible Overlapping
                prev[0] = max(currStart, prevStart);
                prev[1] = min(prevEnd, currEnd);
            }
        }

        return count;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> points = {{10, 16}, {2, 8}, {1, 6}, {7, 12}};
    cout << sol.findMinArrowShots(points);
}
