//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "find_max_double_product.h"
#include <deque>
using namespace std;

static void test_2_2() {
    int n = 0;
    cin >> n;
    deque<int> deq(n);
    for(auto& item: deq)
        cin >> item;
    auto result = find_max_double_product(begin(deq), end(deq));
    for(const auto& item: result) cout << item.first << " " << item.second << endl;
    cout << endl;
}

TEST_CASE("Question #2.2") {
    execute_test("test_2_2.in", test_2_2);
}