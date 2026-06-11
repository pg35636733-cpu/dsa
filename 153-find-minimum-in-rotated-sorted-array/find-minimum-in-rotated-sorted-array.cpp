class Solution {
public:
    int findMin(vector<int>& arr) {

        int start = 0, end = arr.size() - 1;
        int ans = arr[0];

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Left part is sorted
            if (arr[mid] >= arr[0]) {
                start = mid + 1;
            }
            // We are in the right sorted part
            else {
                ans = arr[mid];
                end = mid - 1;
            }
        }

        return ans;
    }
};