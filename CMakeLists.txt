cmake_minimum_required(VERSION 3.22)
project(LeetCode)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-O1 -fexceptions -stdlib=libc++ -Xpreprocessor -fopenmp -Wall -Wextra -Wno-unused")
add_executable(LeetCode main.cpp Two_Sum.cpp Two_Sum.h "Monk and Rotation.h" MonkandInversions.h JamesandtheMenus.h CF_GR_21_A.h _121BestTimetoBuyandSellStock.cpp _121BestTimetoBuyandSellStock.h 136_Single_Number.h "167._Two_Sum_IIInput Array Is Sorted.h" binarySearchTemplate.h 3Sum.h "SPOJ_COMDIV - Number of common divisors.h" "LeetCode_70. Climbing Stairs .h" "Leetcode_338. Counting Bits .h" "Leetcode_35. Search Insert Position .h" "Leetcode_55. Jump Game.h" "Leetcode_53. Maximum Subarray.h" "Leetcode_152. Maximum Product Subarray .h" "LeetCode_238. Product of Array Except Self.h")
