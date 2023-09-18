// include/cppalg/vect.hpp

namespace vect {
	#include <vector>
	#include <numeric>
	
	#define MAX_PERMUTATION_SIZE 10

	inline std::vector<std::vector<int>> powerSet(std::vector<int>& vec)
	{
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

	inline void backtrackPermutations(std::vector<int>& ints, std::vector<int>& vec, int k, std::vector<std::vector<int>>& out) {
		if (k == ints.size()) {
			out.push_back(vec);
			return; 
		}

		for (int i = 0; i < ints.size(); i++) {
			if (vec[i] == MAX_PERMUTATION_SIZE + 1) {
		                vec[i] = ints[k];
		                backtrackPermutations(ints, vec, k + 1, out);
		                vec[i] = MAX_PERMUTATION_SIZE + 1;
		        }
		}
	}

	inline std::vector<std::vector<int>> generatePermutations(int n) {
		std::vector<int> ints(n);
		std::iota (std::begin(ints), std::end(ints), 1);
		std::vector<std::vector<int>> out;
		std::vector<int> vec(n, MAX_PERMUTATION_SIZE + 1);

		backtrackPermutations(ints, vec, 0, out);

		return out;
	}
}