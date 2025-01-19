#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &nums)
{
  int size = nums.size();
  int breaker = 0;

  for (int i = 0; i < size; i++)
  {
    if (nums[i] > nums[(i + 1) % size])
    {
      breaker++;
    }

    if (breaker > 1)
    {
      return false;
    }
  }
  return true;
}

int main()
{

  vector<int> nums = {3, 4, 5, 1, 2};

  int sorted = isSorted(nums);

  cout << sorted << endl;

  return 0;
}

/*
               3 → 4 → 5

               ↑       ↓

               2   ←   1

      In a circular array the increasing order can break once at max.
*/
