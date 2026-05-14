class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int start = 0;
        int end = arr.size() - 1;

        while(start < end)
        {
            int mid = start + (end - start) / 2;

            // We are in increasing part
            if(arr[mid] < arr[mid + 1])
            {
                start = mid + 1;
            }
            // We are in decreasing part
            else
            {
                end = mid;
            }
        }

        return start;
    }
};