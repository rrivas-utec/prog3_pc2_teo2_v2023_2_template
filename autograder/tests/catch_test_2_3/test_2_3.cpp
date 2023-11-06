//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "parallel_consolidate_ranges.h"
#include <list>
using namespace std;

static void test_2_3() {
  list<pair<int, int>> l1;
  int fv = 0;
  int lv = 0;
  while (cin >> fv >> lv) l1.emplace_back(fv, lv);
  int nt = 10;
  auto crs = parallel_consolidate_ranges(begin(l1), end(l1), nt);
  for (const auto& [f, s]: crs) cout << '{' << f << ", " << s << "} ";
}

TEST_CASE("Question #2.3") {
    execute_test("test_2_3.in", test_2_3);
}