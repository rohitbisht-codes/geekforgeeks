class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();

        for(int num = 1; num <= n + 1; num++)
        {
            bool found = false;

            for(int i = 0; i < n; i++)
            {
                if(arr[i] == num)
                {
                    found = true;
                    break;
                }
            }

            if(!found)
                return num;
        }

        return n + 1;
    }
};