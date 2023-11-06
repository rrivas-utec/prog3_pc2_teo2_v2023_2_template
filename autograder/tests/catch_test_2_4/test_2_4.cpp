//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "parallel_consolidate_ranges.h"
#include <forward_list>
using namespace std;

static void test_2_4() {
  forward_list<pair<double, double>> d1;
  double fv = 0;
  double lv = 0;
  while (cin >> fv >> lv) d1.emplace_front(fv, lv);
  int nt = 10;
  auto crs = parallel_consolidate_ranges(begin(d1), end(d1), nt);
  for (const auto& [f, s]: crs) cout << '{' << f << ", " << s << "} ";
}

TEST_CASE("Question #2.4") {
    execute_test("test_2_4.in", test_2_4);
}