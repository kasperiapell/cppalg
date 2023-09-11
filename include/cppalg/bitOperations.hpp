// include/cppalg/bitOperations.hpp

namespace binaryTree {
	int hammingDistance(int x, int y) {
		int z = x ^ y;
		int out = z & 1;

		while (z) {
			z = (z >> 1);
			out += z & 1;
		}

		return out;
	}
}