// Last updated: 11/12/2025, 18:34:51
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> f;
        int i = 0;
        int j = 0;
        while(m>0 && n >0){
            if (nums1[i] > nums2[j]){
                f.push_back(nums2[j]);
                j++;
                n--;
            }
            else if ( nums1[i] < nums2[j]){
                f.push_back(nums1[i]);
                i++;
                m--;
            }
            else{
                f.push_back(nums1[i]);
                f.push_back(nums2[j]);
                i++;
                j++;
                n--;
                m--;
            }
        }
        while (m>0){
            f.push_back(nums1[i]);
            i++;
            m--;
        }
            while (n>0){
            f.push_back(nums2[j]);
            j++;
            n--;
        }
        nums1 = f;
    }
};