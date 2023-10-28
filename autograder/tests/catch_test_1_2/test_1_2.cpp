//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "same_values.h"
#include <list>
using namespace std;

static void test_1_2() {
    int n = 0;
    cin >> n;
    list<int> lst1(n);
    list<int> lst2(n);
    for(auto& item: lst1)
        cin >> item;
    for(auto& item: lst2)
        cin >> item;
    cout << boolalpha << same_values(lst1, lst2) << endl;
}

TEST_CASE("Question #1.2") {
    execute_test("test_1_2.in", test_1_2);
}