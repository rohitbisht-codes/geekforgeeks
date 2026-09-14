class Solution {
  public:
    int single(vector<int>& arr) {

        int n = arr.size();
        int start = 0;
        int end = n - 1;

        while(start < end)
        {
            int mid = start + (end - start) / 2;

            // mid ko even index banao
            if(mid % 2 == 1)
                mid--;

            if(arr[mid] == arr[mid + 1])
            {
                // pair correct hai, single right mein hai
                start = mid + 2;
            }
            else
            {
                // pair break ho gaya, single left mein hai
                end = mid;
            }
        }

        return arr[start];
    }
};