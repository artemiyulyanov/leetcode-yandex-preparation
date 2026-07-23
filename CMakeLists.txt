cmake_minimum_required(VERSION 4.2)
project(leetcode_yandex_preparation)

set(CMAKE_CXX_STANDARD 20)

add_executable(leetcode_yandex_preparation main.cpp
        easy/two-sum/TwoSum.cpp
        easy/two-sum/TwoSum.h
        easy/best-time-to-buy-and-sell/BestTimeToBuyAndSell.cpp
        easy/best-time-to-buy-and-sell/BestTimeToBuyAndSell.h
        easy/contains-duplicate/ContainsDuplicate.cpp
        easy/contains-duplicate/ContainsDuplicate.h
        medium/maximum-subarray/MaximumSubarray.cpp
        medium/maximum-subarray/MaximumSubarray.h
        easy/move-zeroes/MoveZeroes.cpp
        easy/move-zeroes/MoveZeroes.h
        easy/majority-element/MajorityElement.cpp
        easy/majority-element/MajorityElement.h
        medium/product-except-self/ProductExceptSelf.cpp
        medium/product-except-self/ProductExceptSelf.h
        medium/merge-intervals/MergeIntervals.cpp
        medium/merge-intervals/MergeIntervals.h)
