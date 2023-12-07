#include <iostream>
#include <vector>
using namespace std;


int minJumps(vector<int>& nums) {
  int n = nums.size();
  if (n == 1) return 0; 
  int jumps = 0;
  int curr = 0; 
  int next = 0; 
  while (curr < n - 1) { 
    jumps++; 
    int maxReach = 0; 
    for (int i = 1; i <= nums[curr]; i++) { 
      if (curr + i >= n - 1) return jumps;
      if (curr + i + nums[curr + i] > maxReach) { 
        maxReach = curr + i + nums[curr + i]; 
        next = curr + i; 
      }
    }
    curr = next; 
  }
  return jumps; 
}

int main() {
  vector<int> nums = {2, 3, 0, 1, 4};
  cout << "So lan nhay tai thieu la: " << minJumps(nums) << endl; 
  return 0;
}
