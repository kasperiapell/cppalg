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
	uint32_t hammingWeight(uint32_t n) {
		uint32_t count = 0;
		uint32_t mask = 1;

		while (n) {
			if (n & mask) count++;
			n >>= 1;
		}

		return count;
	}

	// Reverses the bits of a 32-bit unsigned integer
	uint32_t reverseBits(uint32_t n) {
		uint32_t out;

	        for (int i = 0; i < 32; i++) {
			out = out << 1;
			bool temp = n & 1;
			out |= temp;
			n = n >> 1;
	        }

	        return out;
	}

}
