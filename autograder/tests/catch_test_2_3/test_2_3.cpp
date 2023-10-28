//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "find_max_double_product.h"
#include <list>
using namespace std;

static void test_2_3() {
    int n = 0;
    cin >> n;
    list<int> lst(n);
    for(auto& item: lst)
        cin >> item;
    auto result = find_max_double_product(begin(lst), end(lst));
    for(const auto& item: result) cout << item.first << " " << item.second << endl;
    cout << endl;
}

TEST_CASE("Question #2.3") {
    execute_test("test_2_3.in", test_2_3);
}