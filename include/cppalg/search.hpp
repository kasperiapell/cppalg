// include/cppalg/search.hpp

namespace search {
	#include <vector>

	// return -1 if target not found in the vector
	inline int binarySearch(std::vector<int>& vec, int target) {
		int bot = 0;
        	int mid;
        	int top = vec.size() - 1;

	        while (bot <= top) {
	        	mid = bot + (top - bot) / 2;
	        	int val = vec[mid];

	        	if (val == target) {
	        		return mid;
	        	} else if (val > target) {
	        		top = mid - 1;
	        	} else {
	        		bot = mid + 1;
	        	}
	        } 

	        return -1; 
	}
}