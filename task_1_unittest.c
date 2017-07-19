#include "cutest.h"
#include "task_1.h"

void test_sum_simple(void) {
    TEST_CHECK(get_digits_sum(123) == 6);
    TEST_CHECK(get_digits_sum(1000) == 1);
    TEST_CHECK(get_digits_sum(5) == 5);
    TEST_CHECK(get_digits_sum(402) == 6);
}

void test_sum_large(void) {
    TEST_CHECK(get_digits_sum(123456789) == 45);
    TEST_CHECK(get_digits_sum(1572959372) == 50);
    TEST_CHECK(get_digits_sum(36395728396293) == 75);
    TEST_CHECK(get_digits_sum(8223374035854745301) == 74);
}

void test_counter_simple(void) {
    TEST_CHECK(counter(1, 15) == 23);
    TEST_CHECK(counter(1, 12) == 19);
    TEST_CHECK(counter(1, 100) == 214);
    TEST_CHECK(counter(1, 10000) == 22134);
}

void test_counter_range(void) {
    TEST_CHECK(counter(42, 100) == 138);
    TEST_CHECK(counter(10, 100) == 197);
    TEST_CHECK(counter(1, 100) == 214);
}

void test_counter_large(void) {
    TEST_CHECK(counter(839, 10001) == 20297);
    TEST_CHECK(counter(10000, 50000) == 81826);
    TEST_CHECK(counter(100, 100000) == 217146);
}

TEST_LIST = {
        { "sum_simple",     test_sum_simple },
        { "sum_large",      test_sum_large },
        { "counter_simple", test_counter_simple },
        { "counter_range",  test_counter_range },
        { "counter_large",  test_counter_large }, // Uncomment in if you’re brave!
        { 0 }
};
