#include "assignment/two_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> two_sum(const std::vector<int>& arr, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int left = 0;
    int right = arr.size()-1;
    int s = 0;
    while (left <= right) {
      s = arr[left] + arr[right];
      if (s == sum) {
        return std::make_pair(left, right);
      } else if (s > sum) {
        right--;
      } else {
        left++;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment