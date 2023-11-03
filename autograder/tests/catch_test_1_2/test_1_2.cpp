//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "consolidate_ranges.h"
#include <list>
#include <deque>
using namespace std;

static void test_1_2() {
  std::list<std::pair<int, int>> v1 = {
      {2, 4}, {3, 6}, {3, 5}, {1, 7}, {8, 10} };
  std::deque<std::pair<int, int>> crs = consolidate_ranges<std::deque>(
      begin(v1), end(v1));
  for (const auto& [f, s]: crs) std::cout << '{' << f << ", " << s << "} ";
}

TEST_CASE("Question #1.2") {
    execute_test("test_1_2.in", test_1_2);
}