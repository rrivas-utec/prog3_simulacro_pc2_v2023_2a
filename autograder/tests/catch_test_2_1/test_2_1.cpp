//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "find_max_double_product.h"
#include <vector>
using namespace std;

static void test_2_1() {
    int n = 0;
    cin >> n;
    vector<int> vec(n);
    for(auto& item: vec)
        cin >> item;
    auto result = find_max_double_product(begin(vec), end(vec));
    for(const auto& item: result) cout << item.first << " " << item.second << endl;
    cout << endl;
}

TEST_CASE("Question #2.1") {
    execute_test("test_2_1.in", test_2_1);
}