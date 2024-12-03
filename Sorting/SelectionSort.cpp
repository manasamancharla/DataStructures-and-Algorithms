#include <bits/stdc++.h>
using namespace std;

// minimum or maximum to the front
// Time complexity O(n2)
void selectionSort(vector<int> &arr, int c)
{

  int small = c;

  for (int i = c; i < arr.size(); i++)
  {
    if (arr[small] > arr[i])
    {
      small = i;
    }
  }

  swap(arr[c], arr[small]);

  return;
}

int main()
{

  vector<int> a = {2, 0, 2, 1, 1, 0};

  for (int j = 0; j < a.size(); j++)
  {
    selectionSort(a, j);
  }

  for (auto it : a)
  {
    cout << it << " ";
  }

  cout << endl;

  return 0;
}