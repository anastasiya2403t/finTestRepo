#include "pch.h"
#include <vector>
#include "C:\MyProjects\vs_test\finTest\finTest\function.cpp"

TEST(TestVector, Test2) {
	std::vector<int> vec1 = { 1,2,3,4,5 };
	std::vector<int> vec2 = myVector(vec1, 10);
	std::vector<int> vec3 = { 11,12,13,14,15 };
	for (int i = 0; i < vec2.size(); i++) {
		EXPECT_EQ(vec3[i], vec2[i]);
	}
}