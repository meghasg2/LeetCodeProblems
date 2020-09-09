//
// Created by Megha Ganesh on 9/8/20.
//

vector<int> twoSum(vector<int>& nums, int target) {
  std::vector<int> solution_vec;
  for (int i = 0; i < nums.size() - 1; i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        solution_vec.push_back(i);
        solution_vec.push_back(j);
        return solution_vec;
      }
    }
  }
  return solution_vec;
}
