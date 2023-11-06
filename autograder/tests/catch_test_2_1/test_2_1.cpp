//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "parallel_consolidate_ranges.h"
#include <vector>
using namespace std;

static void test_2_1() {
  vector<pair<int, int>> v1;
  int fv = 0;
  int lv = 0;
  while (cin >> fv >> lv) v1.emplace_back(fv, lv);
  int nt = 10;
  auto crs = parallel_consolidate_ranges(begin(v1), end(v1), nt);
  for (const auto& [f, s]: crs) cout << '{' << f << ", " << s << "} ";
}

TEST_CASE("Question #2.1") {
    execute_test("test_2_1.in", test_2_1);
}