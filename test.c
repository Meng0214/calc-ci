#include <limits.h>
#include "unity.h"
#include "calc.c"

void setUp(void) {}
void tearDown(void) {}

void test_add(void) {
    TEST_ASSERT_EQUAL(4, add(2, 2));
    TEST_ASSERT_EQUAL(INT_MAX, add(INT_MAX, 1));
    TEST_ASSERT_EQUAL(INT_MIN, add(INT_MIN, -1));
}

void test_sub(void) {
    TEST_ASSERT_EQUAL(0, sub(2, 2));
    TEST_ASSERT_EQUAL(-5, sub(0, 5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    return UNITY_END();
}
