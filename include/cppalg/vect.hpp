// include/cppalg/vect.hpp

namespace vect {
	#include <vector>

	inline std::vector<std::vector<int>> powerSet(std::vector<int>& vec) {
		vector<vector<int>> out = {{}};

	        for (int num: vec) {
	            int n = out.size();

	            for (int i = 0; i < n; i++) {
	                out.push_back(out[i]);
	                out.back().push_back(num);
	            }
	        }

        	return out;
	}
}