//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "consolidate_ranges.h"
using namespace std;

static void test_1_4() {
  std::forward_list<std::pair<double, double>> v1 = {
      {1.0, 3.6}, {3.5, 4.0}, {5.1, 5.9}, {4.5, 15.9}};
  auto crs = consolidate_ranges<std::vector>(begin(v1), end(v1));
  for (const auto& [f, s]: crs) cout << '{' << f << ", " << s << "} ";
}

TEST_CASE("Question #1.4") {
    execute_test("test_1_4.in", test_1_4);
}