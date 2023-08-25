// include/cppalg/sort.hpp

namespace sort {
	#include <cmath>
	#include <vector>

	using namespace std;

	inline void insertionSort(vector<int> &vec)
	{
        	int i, j, x;
        	for (i = 1; i < vec.size(); i++) {
                	x = vec[i];

                	for (j = i; j > 0 && vec[j - 1] > x; j--) {
                        	vec[j] = vec[j - 1];
                	}
                	vec[j] = x;
        	}
	}

	inline void mergeArrays(vector<int> &vec, vector<int> &left, vector<int> &right)
	{
        	int ptr = 0;
        	int qtr = 0;

        	for (int i = 0; i < vec.size(); i++) {
                	if (qtr >= right.size() || (ptr < left.size() && left[ptr] <= right[qtr])) {
                        	vec[i] = left[ptr];
                        	ptr++;
                	} else {
                        	vec[i] = right[qtr];
                        	qtr++;
                	}
        	}
	}

	inline void mergeSort(vector<int> &vec)
	{
	        if (vec.size() <= 10) {
	                insertionSort(vec);
	        } else {
	                vector<int> left;
	                vector<int> right;

	                for (int i = 0; i < floor(vec.size() / 2); i++) {
	                        left.push_back(vec[i]);
	                }

	                for (int j = floor(vec.size() / 2); j < vec.size(); j++) {
	                        right.push_back(vec[j]);
	                }

	                mergeSort(left);
	                mergeSort(right);
	                mergeArrays(vec, left, right);
	        }
	}
}