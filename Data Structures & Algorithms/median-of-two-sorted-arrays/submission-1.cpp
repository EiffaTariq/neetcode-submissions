class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        for(int i = 0; i<nums1.size() ;i++)
        {
            arr.push_back(nums1[i]);
            cout << "arr is: " << nums1[i] << " ";
        }
        for(int j = 0; j<nums2.size() ;j++)
        {
            arr.push_back(nums2[j]);
            cout << nums2[j] ;
        }
        cout << "arr is finished\n";
        int last = arr.size() -1;
        int start = 0;
        float ans = 0;
        sort(arr.begin(), arr.end());
        while(start <= last)
        {
            if(start == last)
            {
                return arr[start];
            }
            if(start == last-1)
            {
                cout << "start element is " << arr[start] << " ";
                cout << "last element is " << arr[last] << " ";
                ans = (arr[start] + arr[last])/2.0;
                
                return ans;
            }
            last = last -1;
            start++;
            
        }
    }
};
