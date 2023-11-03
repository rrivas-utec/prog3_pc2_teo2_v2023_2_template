//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "consolidate_ranges.h"
#include <vector>
#include <deque>
using namespace std;

static void test_1_3() {
  std::deque<std::pair<size_t, size_t>> v1 = {
      {1, 3}, {1, 2}, {1, 4}, {5, 6}};
  auto crs = consolidate_ranges<std::vector>(begin(v1), end(v1));
  for (const auto& [f, s]: crs) cout << '{' << f << ", " << s << "} ";
}

TEST_CASE("Question #1.3") {
    execute_test("test_1_3.in", test_1_3);
}