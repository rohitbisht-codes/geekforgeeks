class Solution {
  public:
    int findPages(vector<int> &arr, int d) {

        int n = arr.size();

        if(d > n)
            return -1;

        long long start = 0;
        long long end = 0;

        for(int i = 0; i < n; i++)
        {
            start = max(start, (long long)arr[i]);
            end += arr[i];
        }

        long long ans = -1;

        while(start <= end)
        {
            long long mid = start + (end - start) / 2;

            long long pages = 0;
            int count = 1;

            for(int i = 0; i < n; i++)
            {
                if(pages + arr[i] > mid)
                {
                    count++;
                    pages = arr[i];
                }
                else
                {
                    pages += arr[i];
                }
            }

            if(count <= d)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return (int)ans;
    }
};