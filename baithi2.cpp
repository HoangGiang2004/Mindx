#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> subsets(vector<int>& nums) {
  vector<vector<int>> result; 
  int n = nums.size(); 
  int p = 1 << n; 
  for (int i = 0; i < p; i++) {
    vector<int> subset; 
    for (int j = 0; j < n; j++) { 
      if (i & (1 << j)) { 
        subset.push_back(nums[j]); 
      }
    }
    result.push_back(subset); 
  }
  return result; 
}

int main() {
  vector<int> nums = {1, 2, 3}; 
  cout << "Tat ca cac tap hop con cua mang la: " << endl; 
  vector<vector<int>> result = subsets(nums); 
  for (auto& subset : result) { 
    cout << "{"; 
    for (int i = 0; i < subset.size(); i++) { 
      cout << subset[i]; 
      if (i < subset.size() - 1) cout << ", "; 
    }
    cout << "}" << endl; 
  }
  return 0;
}
