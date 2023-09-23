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

	// Computes the number of 1 bits in a 32-bit unsigned integer
	int hammingWeight(uint32_t n) {
		uint32_t count = 0;
		uint32_t mask = 1;

		while (n) {
			if (n & mask) count++;
			n >>= 1;
		}

		return count;
	}

}
