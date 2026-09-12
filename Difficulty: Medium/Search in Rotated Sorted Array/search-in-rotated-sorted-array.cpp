class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        int n = arr.size();
        int start = 0;
        int end = n-1;
        while(start<=end)
        {
            int mid = start+(end-start)/2;
            if(arr[mid]==key)
            {
                return mid;
            }
            else if(arr[mid]>=arr[0])
            {
                if(arr[start]<=key && arr[mid]>key)
                {
                    end = mid-1;
                }
                else
                {
                    start = mid+1;
                }
            }
            else
            {
                if(arr[end]>=key && arr[mid]<key)
                {
                    start = mid+1;
                }
                else
                {
                    end = mid-1;
                }
            }
        }
        return -1;
    }
};