# Last updated: 09/09/2025, 01:28:25
class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        l=[0]*(len(nums1)+len(nums2))
        i=j=k=0
        while(i<(len(nums1)) and j <(len(nums2))):
            if nums1[i]>nums2[j]:
                l[k]=nums2[j]
                j+=1
                k+=1
            else :
                l[k]=nums1[i]
                i+=1
                k+=1        
        while(i<len(nums1)):
            l[k]=nums1[i]
            k+=1
            i+=1
        while(j<len(nums2)):
            l[k]=nums2[j]
            k+=1
            j+=1
        print(l)
        if len(l)%2==0:
            return (float((l[(len(l)/2)] + l[((len(l)/2)-1)]))/2)
        else:
            return float(l[len(l)//2])
