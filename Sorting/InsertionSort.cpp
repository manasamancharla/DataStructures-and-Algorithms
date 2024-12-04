#include <bits/stdc++.h>
using namespace std;

// sorting playing cards in your hand
// Time complexity O(n2) in worst case and average case.
// Time complexity O(n) if array already sorted.
void insertionSort(vector<int> &arr)
{
  for (int i = 0; i < arr.size(); i++)
  {
    int temp = i;
    while (temp > 0 && arr[temp - 1] > arr[temp])
    {
      swap(arr[temp - 1], arr[temp]);
      temp--;
    }
  }
}

int main()
{

  vector<int> a = {52, 46, 24, 13, 20, 9};

  insertionSort(a);

  for (auto it : a)
  {
    cout << it << " ";
  }

  cout << endl;

  return 0;
}