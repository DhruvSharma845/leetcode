#include <iostream>
//#include "shuffle_string.h"
//#include "increasing_decreasing_string.h"
//#include "minimum_subsequence_in_non_increasing_order.h"
#include "widest_area_between_two_points.h"

int main() {
    Solution solution;
    //std::vector<int> v{4,5,6,7,0,2,1,3};
    //std::cout << solution.restoreString("codeleet", v) << std::endl;
    //std::string s = "leetcode";
    //std::cout << solution.sortString(s) << std::endl;

    //std::vector<int> v{4,3,10,9,8};
    //std::vector<int> res = solution.minSubsequence(v);
    //std::copy(res.begin(), res.end(), std::ostream_iterator<int>(std::cout, " "));

    std::vector<std::vector<int>> v{
        {10,9}, {8,3}, {7,4}
    };
    std::cout << solution.maxWidthOfVerticalArea(v) << std::endl;
}