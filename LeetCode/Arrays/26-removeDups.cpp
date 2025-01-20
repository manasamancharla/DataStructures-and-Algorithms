#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
  set<int> st;

  int size = nums.size();

  // Time Complexity : O(nlogn)
  for (int i = 0; i < size; i++)
  {
    st.emplace(nums[i]);
  }

  int index = 0;
  for (auto it : st)
  {
    nums[index] = it;
    index++;
  }

  nums.erase(nums.begin() + index, nums.end());

  return nums.size();
}

// Time Complexity : O(n)
// Simple Two pointer
int removeDuplicatesB(vector<int> &nums)
{
  int size = nums.size();
  int fp = 0;
  if (size == 0)
  {
    return 0;
  }

  for (int i = 1; i < size; i++)
  {
    if (nums[fp] != nums[i])
    {
      fp++;
      nums[fp] = nums[i];
    }
  }

  nums.erase(nums.begin() + fp + 1, nums.end());

  for (auto it : nums)
  {
    cout << it << " ";
  }

  cout << endl;

  return nums.size();
}

int main()
{
  vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

  removeDuplicatesB(nums);

  return 0;
}
