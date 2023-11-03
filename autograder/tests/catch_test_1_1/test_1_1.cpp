//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "consolidate_ranges.h"
#include <vector>
#include <list>
using namespace std;

static void test_1_1() {
  std::vector<std::pair<int, int>> v1 = {{1, 3}, {2, 4}, {5, 7}, {6, 8}};
  auto crs = consolidate_ranges<std::list>(begin(v1), end(v1));
  for (const auto& [f, s]: crs) std::cout << '{' << f << ", " << s << "} ";
}

TEST_CASE("Question #1.1") {
    execute_test("test_1_1.in", test_1_1);
}