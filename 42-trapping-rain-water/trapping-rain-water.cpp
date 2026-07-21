class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int water = 0;
        int leftmax = 0, rightmax = 0;

        // Find index of maximum height
        int maxheight = height[0], index = 0;
        for (int i = 1; i < n; i++) {
            if (maxheight < height[i]) {
                maxheight = height[i];
                index = i;
            }
        }

        // Traverse left part
        for (int i = 0; i < index; i++) {
            if (leftmax > height[i])
                water += leftmax - height[i];
            else
                leftmax = height[i];
        }

        // Traverse right part
        for (int i = n - 1; i > index; i--) {
            if (rightmax > height[i])
                water += rightmax - height[i];
            else
                rightmax = height[i];
        }

        return water;
    }
};