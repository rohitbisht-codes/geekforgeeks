class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {

        int n = arr.size();
        vector<int> ans;
        vector<int> freq(n, 0);

        for(int i = 0; i < n; i++)
        {
            freq[arr[i]]++;

            if(freq[arr[i]] == 2)
            {
                ans.push_back(arr[i]);
            }
        }

        return ans;
    }
};