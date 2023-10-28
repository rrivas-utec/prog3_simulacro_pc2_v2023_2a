//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "same_values.h"
#include <list>
#include <deque>
using namespace std;

static void test_1_3() {
    int n = 0;
    cin >> n;
    list<int> lst1(n);
    deque<int> deq2(n);
    for(auto& item: lst1)
        cin >> item;
    for(auto& item: deq2)
        cin >> item;
    cout << boolalpha << same_values(lst1, deq2) << endl;
}

TEST_CASE("Question #1.3") {
    execute_test("test_1_3.in", test_1_3);
}